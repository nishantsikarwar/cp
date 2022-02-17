class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int R = nums.size() - 1;
        int L = 0;
        int pos = 0;
        
        while ( L <= R)
        {
            int mid = L + (R - L)/2;
            
            if(nums[mid] == target)
                {
                pos = mid;
                return mid;
            }
            
            else if(nums[mid] < target)
             {  
                  L = mid +1;
                  pos = L;
                }
            else 
           {    
                R = mid - 1;
                pos = R;
                }
                
        }
        return R;
    }
};