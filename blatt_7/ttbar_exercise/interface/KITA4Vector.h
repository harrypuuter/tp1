#ifndef KITA4Vector_h
#define KITA4Vector_h

#include "Math/PxPyPzE4D.h"

typedef ROOT::Math::PxPyPzE4D<float> KITA4Vector;

template<typename T>
KITA4Vector operator+(const T & l, const T & r){
    typedef typename T::Scalar scalar;
    KITA4Vector left(l);
    KITA4Vector right(r);
    scalar data_l[4];
    scalar data_r[4];
    left.GetCoordinates(data_l);
    right.GetCoordinates(data_r);
    for(int i=0; i<4; ++i){
        data_l[i] += data_r[i];
    }
    T result;
    result.SetCoordinates(data_l);
    return result;
}
#endif
