#include "stats.h"

Statistics::StatMember Statistics::ComputeStatistics(const std::vector<double> &Input) {
  Statistics::StatMember stats;
    
  if (!numbers.size()) {
    stats.average = std::numeric_limits<double>::quiet_NaN();
    stats.max = std::numeric_limits<double>::quiet_NaN();
    stats.min = std::numeric_limits<double>::quiet_NaN();

    return stats;
  }
  stats.min = *std::min_element(number.begin(), number.end());
  stats.max = *std::max_element(number.begin(), number.end());
  stats.average =
      std::accumulate(number.begin(), number.end(), 0.000) / number.size();

  return stats;

}
