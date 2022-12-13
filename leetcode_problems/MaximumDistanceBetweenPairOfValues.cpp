class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int L = nums1.size();
       int R = nums2.size();
        if(nums1[L-1] > nums2[0])
            {
                return 0;
                }

        int i = 0 , j = 0 , max_dist = 0;
        while(i < L)
        {
            if(j < R && nums1[i] <= nums2[j])
            {
                max_dist = max(max_dist, j - i);
                j += 1;
                }
            else{
                  j += 1;
                  i += 1;
            }

        }

        return max_dist; 
    }
};