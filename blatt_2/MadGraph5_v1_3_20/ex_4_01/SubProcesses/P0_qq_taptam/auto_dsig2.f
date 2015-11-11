      DOUBLE PRECISION FUNCTION DSIG2(PP,WGT,IMODE)
C     ****************************************************
C     
C     Generated by MadGraph 5 v. 1.3.20, 2011-10-09
C     By the MadGraph Development Team
C     Please visit us at https://launchpad.net/madgraph5
C     
C     Process: d d~ > z > ta+ ta- HIG=1 HIW=1 WEIGHTED=4
C     Process: s s~ > z > ta+ ta- HIG=1 HIW=1 WEIGHTED=4
C     
C     RETURNS DIFFERENTIAL CROSS SECTION
C     Input:
C     pp    4 momentum of external particles
C     wgt   weight from Monte Carlo
C     imode 0 run, 1 init, 2 reweight, 
C     3 finalize, 4 only PDFs
C     Output:
C     Amplitude squared and summed
C     ****************************************************
      IMPLICIT NONE
C     
C     CONSTANTS
C     
      INCLUDE 'genps.inc'
      INCLUDE 'nexternal.inc'
      INCLUDE 'maxamps.inc'
      DOUBLE PRECISION       CONV
      PARAMETER (CONV=389379.66*1000)  !CONV TO PICOBARNS
      REAL*8     PI
      PARAMETER (PI=3.1415926D0)
C     
C     ARGUMENTS 
C     
      DOUBLE PRECISION PP(0:3,NEXTERNAL), WGT
      INTEGER IMODE
C     
C     LOCAL VARIABLES 
C     
      INTEGER I,ITYPE,LP
      DOUBLE PRECISION U1,UB1,D1,DB1,C1,CB1,S1,SB1,B1,BB1
      DOUBLE PRECISION U2,UB2,D2,DB2,C2,CB2,S2,SB2,B2,BB2
      DOUBLE PRECISION G1,G2
      DOUBLE PRECISION A1,A2
      DOUBLE PRECISION XPQ(-7:7)
      DOUBLE PRECISION DSIGUU
C     
C     EXTERNAL FUNCTIONS
C     
      LOGICAL PASSCUTS
      DOUBLE PRECISION ALPHAS2,REWGT,PDG2PDF
C     
C     GLOBAL VARIABLES
C     
      INTEGER              IPROC
      DOUBLE PRECISION PD(0:MAXPROC)
      COMMON /SUBPROC/ PD, IPROC

      INTEGER SUBDIAG(MAXSPROC),IB(2)
      COMMON/TO_SUB_DIAG/SUBDIAG,IB
      INCLUDE 'coupl.inc'
      INCLUDE 'run.inc'
C     
C     DATA
C     
      DATA U1,UB1,D1,DB1,C1,CB1,S1,SB1,B1,BB1/10*1D0/
      DATA U2,UB2,D2,DB2,C2,CB2,S2,SB2,B2,BB2/10*1D0/
      DATA A1,G1/2*1D0/
      DATA A2,G2/2*1D0/
C     ----------
C     BEGIN CODE
C     ----------
      DSIG2=0D0

C     Only run if IMODE is 0
      IF(IMODE.NE.0.AND.IMODE.NE.4) RETURN


      IF (ABS(LPP(IB(1))).GE.1) THEN
        LP=SIGN(1,LPP(IB(1)))
        D1=PDG2PDF(ABS(LPP(IB(1))),1*LP,XBK(IB(1)),DSQRT(Q2FACT(1)))
        S1=PDG2PDF(ABS(LPP(IB(1))),3*LP,XBK(IB(1)),DSQRT(Q2FACT(1)))
      ENDIF
      IF (ABS(LPP(IB(2))).GE.1) THEN
        LP=SIGN(1,LPP(IB(2)))
        SB2=PDG2PDF(ABS(LPP(IB(2))),-3*LP,XBK(IB(2)),DSQRT(Q2FACT(2)))
        DB2=PDG2PDF(ABS(LPP(IB(2))),-1*LP,XBK(IB(2)),DSQRT(Q2FACT(2)))
      ENDIF
      PD(0) = 0D0
      IPROC = 0
      IPROC=IPROC+1  ! d d~ > ta+ ta-
      PD(IPROC)=PD(IPROC-1) + D1*DB2
      IPROC=IPROC+1  ! s s~ > ta+ ta-
      PD(IPROC)=PD(IPROC-1) + S1*SB2
      IF (IMODE.EQ.4)THEN
        DSIG2 = PD(IPROC)
        RETURN
      ENDIF
      CALL SMATRIX2(PP,DSIGUU)
      DSIGUU=DSIGUU*REWGT(PP)
      IF (DSIGUU.LT.1D199) THEN
        DSIG2=PD(IPROC)*CONV*DSIGUU
      ELSE
        WRITE(*,*) 'Error in matrix element'
        DSIGUU=0D0
        DSIG2=0D0
      ENDIF
      IF(IMODE.EQ.0.AND.DSIG2.GT.0D0)THEN
C       Call UNWGT to unweight and store events
        CALL UNWGT(PP,DSIG2*WGT,2)
      ENDIF

      END

