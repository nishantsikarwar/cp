class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
            int n = nums.size();
        vector <int> pos = {-1, -1};

         for (int i = 0; i < n; i++) {
        if (target != nums[i])
            continue;
        if (pos[0] == -1)
            pos[0] = i;
        pos[1] = i;
    }
