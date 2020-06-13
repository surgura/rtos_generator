#pragma once

#include <vector>
#include <string>
#include "tasklist.hpp"

namespace tasks {

class tasklist_parser {
public:
    static tasklist parse_string(std::string const& json);
    static tasklist parse_file(std::string const& file);
};

}