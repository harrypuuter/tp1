ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      SUBROUTINE COUP(READLHA)

      IMPLICIT NONE
      LOGICAL READLHA
      DOUBLE PRECISION PI
      PARAMETER  (PI=3.141592653589793D0)

      INCLUDE 'input.inc'
      INCLUDE 'coupl.inc'
      INCLUDE 'intparam_definition.inc'



      IF (READLHA) THEN

        CALL COUP1()

      ENDIF

C     
C     couplings needed to be evaluated points by points
C     
      CALL COUP2()

      RETURN
      END

