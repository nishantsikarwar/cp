class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if (points.empty()) return 0;
    
        // Sort the balloons by their end points
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
    
        int arrows = 1;  // Start with one arrow
        int current_end = points[0][1];  // End point of the first balloon
    
        for (const vector<int>& balloon : points) {
            // If the current balloon starts after the last arrow's end, we need a new arrow
            if (balloon[0] > current_end) {
                arrows++;
                current_end = balloon[1];
            }
        }
    
            return arrows;
        }
};