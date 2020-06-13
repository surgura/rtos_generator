#pragma once

#include "../tasks/tasklist.hpp"

namespace scheduling {

class scheduler {
public:
    static int schedule(tasks::tasklist const& required_tasks);
};

}