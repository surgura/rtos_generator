#include "tasks/tasklist_parser.hpp"
#include <iostream>

int main(int argc, char const* const* argv) {
    if (argc != 2)
        return -1;

    tasks::tasklist tasks = tasks::tasklist_parser::parse_file(argv[1]);
    return 0;
}