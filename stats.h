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

