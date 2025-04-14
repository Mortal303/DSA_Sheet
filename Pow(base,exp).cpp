// Video - https://www.youtube.com/watch?v=hFWckDXE-K8
// problem - https://leetcode.com/problems/powx-n/description/


class Solution {
    public:
        double myPow(double base, int exp) {
            double result = 1;
            long m = exp;
            if (m < 0) m = -m;
            while(m) {
                if (m % 2 == 1) {
                    result = result * base;
                }
                base = base * base;
                m /= 2;
            }
    
            if (exp < 0)
                return 1.0/result;
            return result;    
        }
    };