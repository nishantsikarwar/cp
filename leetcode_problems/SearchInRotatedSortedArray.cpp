class Solution {
public:
    int search(vector<int>& nums, int target) {
          
      int n = nums.size();
      int l = 0;
      int r = n -1;
      while(l <= r)
      {
        //   int mid = l + ((r-l)/2);
        int mid = (l + r)/2;

          if(nums[mid] == target)
            return mid;

            if(nums[l] <= nums[mid])
            {
                if(target > nums[mid] || target < nums[l])
                    l = mid + 1;
                else 
                    r = mid -1;


            }

            else 
            {
                if (target < nums[mid] || target > nums[r])
                    r = mid -1;

                    else
                     l = mid +1;
            }


        //   if(nums[m] > nums[0])
        //   {

        //   }

        //   else {

        //   }
      }
        return -1;

    }
};