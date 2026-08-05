class Solution {
public:
    int divide(int dividend, int divisor) {
        
         // Edge cases
        if (dividend == divisor)
            return 1;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        if (divisor == 1)
            return dividend;

        // Determine the sign of the result
        bool sign = true;
        if ((dividend < 0 && divisor > 0) ||
            (dividend > 0 && divisor < 0))
            sign = false;

        // Convert to positive numbers
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long quotient = 0;

        // Main logic
        while (n >= d) {

            int cnt = 0;

            // Find the maximum shift possible
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }

            // Add 2^cnt to quotient
            quotient += (1LL << cnt);

            // Subtract (divisor * 2^cnt)
            n -= (d << cnt);
        }

        // Apply sign
        if (!sign)
            quotient = -quotient;

        // Overflow check
        if (quotient > INT_MAX)
            return INT_MAX;

        if (quotient < INT_MIN)
            return INT_MIN;

        return (int)quotient;
    }
    
};