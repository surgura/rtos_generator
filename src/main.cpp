#include "tasks/tasklist_parser.hpp"
#include "scheduling/scheduler.hpp"
#include <iostream>

int main(int argc, char const* const* argv) {
    if (argc != 2)
        return -1;

    tasks::tasklist tasks = tasks::tasklist_parser::parse_file(argv[1]);
    auto schedule = scheduling::scheduler::generate(tasks);
    if (!schedule) {
        std::cout << "error!" << std::endl;
    }
    return 0;
}