#pragma once

#include <optional>
#include <vector>

namespace stats {

std::optional<double> mean(const std::vector<double>& data);
std::optional<double> median(const std::vector<double>& data);
std::optional<double> min_val(const std::vector<double>& data);
std::optional<double> max_val(const std::vector<double>& data);

}  // namespace stats
