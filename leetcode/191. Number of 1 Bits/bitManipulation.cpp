class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a = 0;
        for(; n!=0; n = (n>>1))
            if(n&1) // read [0]
                a++;
        return a;
    }
};
