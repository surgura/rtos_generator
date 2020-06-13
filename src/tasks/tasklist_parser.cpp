#include "tasklist_parser.hpp"
#include "../3rd_party/json.hpp"
#include <fstream>

using namespace tasks;

tasklist parse_json(nlohmann::json const& json) {
    tasklist tasks;

    for (auto task_json : json) {
        tasks.tasks.push_back(task(
            task_json["function"],
            fu32(std::stoi(task_json["frequency"].get_ref<std::string const&>()), 1)
        ));
    }

    return tasks;
}

tasklist tasklist_parser::parse_string(std::string const& json) {
    auto parsed = nlohmann::json::parse(json);
    return parse_json(parsed);
}

tasklist tasklist_parser::parse_file(std::string const& file) {
    std::ifstream ifs(file);
    auto parsed = nlohmann::json::parse(ifs);
    return parse_json(parsed);
}