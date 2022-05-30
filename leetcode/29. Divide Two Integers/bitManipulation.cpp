class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long dv = labs(dividend), ds = labs(divisor);
        int sign = (dividend > 0 ^ divisor > 0) ? -1 : 1;
        long ans = 0;
        while(dv >= ds)
        {
            long tp = ds, d = 1;
            while(tp<<1 <= dv)
            {
                tp<<=1;
                d<<=1;
            }
            dv -= tp;
            ans += d;
        }
        return ans * sign;
    }
};
