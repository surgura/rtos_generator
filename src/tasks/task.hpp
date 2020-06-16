#pragma once

#include "../fraction.hpp"
#include <string>

namespace tasks {

class task {
public:
    std::string function;
    fu32 period;
    fu32 deadline;
    fu32 duration;

    task(std::string function, fu32 period, fu32 deadline, fu32 duration) :
        function(function),
        period(period),
        deadline(deadline),
        duration(duration)
    {}
};

}