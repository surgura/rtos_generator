#include <numeric>

template <typename M, typename N>
constexpr auto lcm(const M& m, const N& n) {
    return std::lcm(m, n);
}

template <typename M, typename ...Rest>
constexpr auto lcm(const M& first, const Rest&... rest) {
    return std::lcm(first, lcm(rest...));
}