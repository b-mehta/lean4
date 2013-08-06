/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
        Soonho Kong
*/
#include <cfenv>
#include <cmath>
#include "numeric_traits.h"

namespace lean {

mpfr_rnd_t numeric_traits<double>::rnd = MPFR_RNDN;
mpfr_rnd_t numeric_traits<float>::rnd = MPFR_RNDN;
void set_processor_rounding(bool plus_inf) {
    if (plus_inf)
        std::fesetround(FE_UPWARD);
    else
        std::fesetround(FE_DOWNWARD);
}

void double_power(double & v, unsigned k) {
    v = std::pow(v, k);
}
void float_power(float & v, unsigned k) {
    v = std::pow(v, k);
}

};
