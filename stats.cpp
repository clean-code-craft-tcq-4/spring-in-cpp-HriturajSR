#include "stats.h"

Statistics::StatMember Statistics::ComputeStatistics(const std::vector<double> &Input) {
  Statistics::StatMember stats;
    
  if (!Input.size()) {
    stats.average = std::numeric_limits<double>::quiet_NaN();
    stats.max = std::numeric_limits<double>::quiet_NaN();
    stats.min = std::numeric_limits<double>::quiet_NaN();

    return stats;
  }
  stats.min = *std::min_element(Input.begin(), Input.end());
  stats.max = *std::max_element(Input.begin(), Input.end());
  double avg = 0;
	for (double input : Input)
		{
			avg = avg + input;
		}
		stats.average = avg / Input.size();
  return stats;

}
void StatsAlerter::checkAndAlert(const std::vector<float>& Input)
{
	float max = Input[0];
	max = *max_element(Input.begin(), Input.end());
	if (max > maxT)
	{
		Alerts[0]->updateState();
		Alerts[1]->updateState();
	}
}
