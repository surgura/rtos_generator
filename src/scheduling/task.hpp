#pragma once

#include <string>

namespace scheduler {

class task {
public:
    std::string function;

    task(std::string function) :
        function(function)
    {}
};

}