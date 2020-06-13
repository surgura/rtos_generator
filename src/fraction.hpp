#pragma once

#include <cstdint>

template<typename T>
class fraction {
public:
    T numerator;
    T denominator;

    fraction(T numerator, T denominator) :
        numerator(numerator),
        denominator(denominator)
    {}
};

using fu32 = fraction<std::uint32_t>;