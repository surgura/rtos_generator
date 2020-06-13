#include "scheduler.hpp"

using namespace scheduling;

tl::expected<schedule, scheduler::fail_reason>  scheduler::generate(tasks::tasklist const& required_tasks) {
    return tl::make_unexpected(fail_reason::TEST);
}