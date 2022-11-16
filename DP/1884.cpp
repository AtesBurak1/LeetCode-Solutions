class Solution {
public:
    int twoEggDrop(int n) {
         int res = 1;
    // a mathematical calculation
    while (n - res > 0)
        n -= res++;
    return res;  
    }
};