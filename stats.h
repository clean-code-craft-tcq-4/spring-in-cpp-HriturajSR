#include <vector>
#include <iostream>
#include <array>
#include <cstring>
#include <numeric>
#include <bits/stdc++.h>


namespace Statistics {
    
class StatMember {
public:
  double min, max, average;
};
    StatMember ComputeStatistics(const std::vector<double> &Input);
}
class IAlerter
{
public:
	virtual void updateState() = 0;
};

class EmailAlert : public IAlerter
{
public:
	bool emailSent;
	EmailAlert()
	{
		emailSent = false;
	}

	void updateState() override
	{
		emailSent = true;
	}
};
class LEDAlert : public IAlerter
{
public:
	bool ledGlows;
	LEDAlert()
	{
		ledGlows = false;
	}
	void updateState() override
	{
		ledGlows = true;
	}
};

class StatsAlerter
{
	int maxT;
	std::vector<IAlerter*> Alerts;
public:
	StatsAlerter(int maxThreshold, std::vector<IAlerter*> Alerters)
	{
		maxT = maxThreshold;
		Alerts = Alerters;
	}
	void checkAndAlert(const std::vector<float>& data);
};
