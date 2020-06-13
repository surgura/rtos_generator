#pragma once

#include "../fraction.hpp"
#include <string>

namespace tasks {

class task {
public:
    std::string function;
    fu32 frequency;

    task(std::string function, fu32 frequency) :
        function(function),
        frequency(frequency)
    {}
};

}