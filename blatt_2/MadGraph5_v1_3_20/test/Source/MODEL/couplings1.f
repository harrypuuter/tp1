ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      SUBROUTINE COUP1()

      IMPLICIT NONE
      DOUBLE PRECISION PI
      PARAMETER  (PI=3.141592653589793D0)


      INCLUDE 'input.inc'
      INCLUDE 'coupl.inc'

      GC_2 = -(EE*COMPLEXI)/3.000000D+00
      GC_3 = (2.000000D+00*EE*COMPLEXI)/3.000000D+00
      GC_4 = -(EE*COMPLEXI)
      GC_27 = -(CW*EE*COMPLEXI)/(2.000000D+00*SW)
      GC_28 = (CW*EE*COMPLEXI)/(2.000000D+00*SW)
      GC_29 = -(EE*COMPLEXI*SW)/(6.000000D+00*CW)
      GC_30 = (EE*COMPLEXI*SW)/(2.000000D+00*CW)
      GC_44 = -((COMPLEXI*YTAU)/SQRT__2)
      END
