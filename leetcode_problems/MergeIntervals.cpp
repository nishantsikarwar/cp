class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
     if (intervals.empty()) return {};

    // Sort the intervals by their starting values
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); ++i) {
        // If the current interval's start is less than or equal to the end of the last merged interval,
        // merge them by updating the end of the last merged interval if needed.
        if (intervals[i][0] <= merged.back()[1]) {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            // Otherwise, add the current interval to the merged list
            merged.push_back(intervals[i]);
        }
    }

    return merged;

    }

};