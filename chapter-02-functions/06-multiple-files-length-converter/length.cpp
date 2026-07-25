#include <iostream>
#include "length.h"
namespace length{
    double cm_to_m(double cm){
        return cm/100;
    }
    double m_to_cm(double m){
        return m*100;
    }
}