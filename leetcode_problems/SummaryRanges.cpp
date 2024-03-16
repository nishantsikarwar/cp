
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       std::vector<std::string> ranges;
    if (nums.empty()) return ranges;

    int start = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        // Check if the current number is not consecutive to the previous one
        if (nums[i] != nums[i - 1] + 1) {
            int end = nums[i - 1];
            if (start == end) {
                ranges.push_back(std::to_string(start));
            } else {
                ranges.push_back(std::to_string(start) + "->" + std::to_string(end));
            }
            start = nums[i];
        }
    }

    // Add the last range
    if (start == nums.back()) {
        ranges.push_back(std::to_string(start));
    } else {
        ranges.push_back(std::to_string(start) + "->" + std::to_string(nums.back()));
    }

    return ranges;

    }
};