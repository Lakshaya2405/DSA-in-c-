class Solution {
public:  
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;    // Extract last digit
        rev = rev * 10 + digit; // Add digit to reverse
        n = n / 10;            // Remove last digit
    }
    return rev;
}
    int mirrorDistance(int n) {
        return abs(n-reverseNumber(n));
    }
};