class Solution {
public:
    int tribonacci(int n) {
        if (n == 0 || n==1)
            return 0;
        if(n==2)
            return 1;
        
        int i = 0;
        int T0 = 0;
        int T1 = 1;
        int T2 = 1;
        int Tn = T0 + T1 + T2;
        
        while( i < n-3 )
        {
            T0 = T1;
            T1 = T2;
            T2 = Tn;
            Tn = (unsigned int)T0 + T1 + T2;
            i++;
        }
        return Tn;
    }
};