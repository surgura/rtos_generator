#include "tasklist_parser.hpp"
#include "../3rd_party/json.hpp"
#include <fstream>

using namespace tasks;

fu32 parse_fu32(std::string const& str) {
    return fu32(std::stoi(str), 1);
}

tasklist parse_json(nlohmann::json const& json) {
    tasklist tasks;

    for (auto task_json : json) {
        tasks.tasks.push_back(task(
            task_json["function"],
            parse_fu32(task_json["period"]),
            parse_fu32(task_json["deadline"]),
            parse_fu32(task_json["duration"])
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