class Solution {
public:
    double myPow(double x, int n) {
        
       
        if (n == 0) return 1;
        if (x == 0) return 0;

        long binform = n;
        if (n < 0) {              // changed from n<1
            binform = -binform;   // only flip the exponent, do NOT do x = 1/x here
        }

        double ans = 1;
        double base = x;          // new: work on a copy of x

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= base;      // changed from x to base
            }
            base = base * base;   // changed from x = x*x
            binform /= 2;
        }

        if (n < 0) return 1.0 / ans;   // new: reciprocal once, at the end
        return ans;
    }
};