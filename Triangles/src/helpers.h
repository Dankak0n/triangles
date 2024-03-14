#ifndef TRIANGLES_SRC_HELPERS_H
#define TRIANGLES_SRC_HELPERS_H

#include <cmath>
#include <cstdint>

namespace helpers {
    constexpr double PRECISION = 0.000000001;

    inline bool _equalDouble(double a, double b) {
        return ::abs(a - b) < PRECISION;
    }
    inline bool _lessDouble(double a, double b) {
        return !_equalDouble(a, b) && a < b;
    }   
    inline bool _greaterDouble(double a, double b) {
        return !_equalDouble(a, b) && a > b;
    }   
    inline bool _lessEqualDouble(double a, double b) {
        return _equalDouble(a, b) || _lessDouble(a, b);
    }
    inline bool _greaterEqualDouble(double a, double b) {
        return _equalDouble(a, b) || _greaterDouble(a, b);
    }
    inline int32_t _signum(double x) {
        if (_lessDouble(x, 0)) return -1;
        if (_lessDouble(0, x)) return 1;
        return 0;
    }
}

#endif //TRIANGLES_SRC_HELPERS_H