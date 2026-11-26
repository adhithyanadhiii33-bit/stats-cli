#include "stats.hpp"

#include <iostream>
#include <optional>
#include <string>
#include <vector>

static void print_opt(const std::string& label, std::optional<double> val) {
    std::cout << "  " << label << ": ";
    if (val.has_value()) {
        std::cout << *val << '\n';
    } else {
        std::cout << "empty (nullopt)\n";
    }
}

static void run_case(const std::string& name, const std::vector<double>& data) {
    std::cout << "[" << name << "]\n";
    print_opt("mean", stats::mean(data));
    print_opt("median", stats::median(data));
    print_opt("min", stats::min_val(data));
    print_opt("max", stats::max_val(data));
}

int main() {
    run_case("Empty input", {});
    run_case("Odd + negatives", {-10.0, -3.5, -20.0});
    run_case("Even + duplicates", {4.0, 1.0, 2.0, 2.0});
    run_case("Even + mixed + duplicates", {-5.0, 3.0, -5.0, 10.0});
    run_case("Single element", {42.0});
    return 0;
}