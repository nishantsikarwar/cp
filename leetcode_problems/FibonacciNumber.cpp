class Solution {
public:
    int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        int fn = f0 + f1;
        int i = 0;
        if ( n == 0 )
            return f0;
        if ( n ==1);
        return f1;
        
        while ( i < n-2)
        {
            f0 = f1;
            f1 = fn;
            fn = f1 + f0;
            i ++;
        }
        
        return fn;
    }
};