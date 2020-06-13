#pragma once

#include "../tasks/tasklist.hpp"
#include "../3rd_party/expected.hpp"
#include "schedule.hpp"

namespace scheduling {

class scheduler {
public:
    enum class fail_reason {
        TEST
    };

    static tl::expected<schedule, fail_reason> generate(tasks::tasklist const& required_tasks);
};

}