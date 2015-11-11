ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

C     Parameters that should not be recomputed event by event.
C     
      IF(READLHA) THEN

        SQRT__AS = DSQRT(AS)

        G = 2.000000D+00*SQRT__AS*DSQRT(PI)

        MP = MH

        COMPLEXI = (0.000000D+00,1.000000D+00)

        MZ__EXP__2 = MZ**2

        MZ__EXP__4 = MZ**4

        SQRT__2 = DSQRT(2.000000D+00)

        MH__EXP__4 = MH**4

        MT__EXP__4 = MT**4

        MH__EXP__2 = MH**2

        MT__EXP__2 = MT**2

        MH__EXP__12 = MH**12

        MH__EXP__10 = MH**10

        MH__EXP__8 = MH**8

        MH__EXP__6 = MH**6

        MT__EXP__6 = MT**6

        AEW = 1.000000D+00/AEWM1

        MW = DSQRT(MZ__EXP__2/2.000000D+00+DSQRT(MZ__EXP__4/4.000000D
     $   +00-(AEW*PI*MZ__EXP__2)/(GF*SQRT__2)))

        SQRT__AEW = DSQRT(AEW)

        EE = 2.000000D+00*SQRT__AEW*DSQRT(PI)

        MW__EXP__2 = MW**2

        SW2 = 1.000000D+00-MW__EXP__2/MZ__EXP__2

        CW = DSQRT(1.000000D+00-SW2)

        SQRT__SW2 = DSQRT(SW2)

        SW = SQRT__SW2

        G1 = EE/CW

        GW = EE/SW

        V = (2.000000D+00*MW*SW)/EE

        EE__EXP__2 = EE**2

        MW__EXP__12 = MW**12

        MW__EXP__10 = MW**10

        MW__EXP__8 = MW**8

        MW__EXP__6 = MW**6

        MW__EXP__4 = MW**4

        AH = (4.700000D+01*EE__EXP__2*(1.000000D+00-(2.000000D
     $   +00*MH__EXP__4)/(9.870000D+02*MT__EXP__4)-(1.400000D
     $   +01*MH__EXP__2)/(7.050000D+02*MT__EXP__2)+(2.130000D
     $   +02*MH__EXP__12)/(2.634632D+07*MW__EXP__12)+(5.000000D
     $   +00*MH__EXP__10)/(1.197560D+05*MW__EXP__10)+(4.100000D
     $   +01*MH__EXP__8)/(1.809500D+05*MW__EXP__8)+(8.700000D
     $   +01*MH__EXP__6)/(6.580000D+04*MW__EXP__6)+(5.700000D
     $   +01*MH__EXP__4)/(6.580000D+03*MW__EXP__4)+(3.300000D
     $   +01*MH__EXP__2)/(4.700000D+02*MW__EXP__2)))/(7.200000D
     $   +01*PI**2*V)

        V__EXP__2 = V**2

        LAM = MH__EXP__2/(2.000000D+00*V__EXP__2)

        YB = (YMB*SQRT__2)/V

        YT = (YMT*SQRT__2)/V

        YTAU = (YMTAU*SQRT__2)/V

        MUH = DSQRT(LAM*V__EXP__2)

        GW__EXP__2 = GW**2

        CW__EXP__2 = CW**2

        SW__EXP__2 = SW**2

      ENDIF
C     
C     Parameters that should be recomputed at an event by even basis.
C     
      G__EXP__2 = G**2

      GH = -(G__EXP__2*(1.000000D+00+(1.300000D+01*MH__EXP__6)
     $ /(1.680000D+04*MT__EXP__6)+MH__EXP__4/(1.680000D+02*MT__EXP__4)
     $ +(7.000000D+00*MH__EXP__2)/(1.200000D+02*MT__EXP__2)))
     $ /(1.200000D+01*PI**2*V)

      GPHI = -(G__EXP__2*(1.000000D+00+MH__EXP__6/(5.600000D+02
     $ *MT__EXP__6)+MH__EXP__4/(9.000000D+01*MT__EXP__4)+MH__EXP__2
     $ /(1.200000D+01*MT__EXP__2)))/(8.000000D+00*PI**2*V)

C     
C     Definition of the EW coupling used in the write out of aqed
C     
      GAL(1) = 1D0
      GAL(2) = 1D0

