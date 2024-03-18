class Solution {


public:

    int sumOfSquares(int n) {
        int sum = 0;
        while(n>0) {
            int digit = n%10;
            sum += digit*digit;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> hashSet;

        while (n != 1){
            if(hashSet.find(n) != hashSet.end())
               { 
                return false;
                }
                
            hashSet.insert(n);
            n = sumOfSquares(n);

        }

        return true;
    }
};