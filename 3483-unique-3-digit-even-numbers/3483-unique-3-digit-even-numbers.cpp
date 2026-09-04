class Solution {
public:
    int totalNumbers(vector<int>& digits) {
         vector<int> freq(10, 0);

        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Try every 3-digit even number
        for (int num = 100; num <= 998; num += 2) {
            int x = num;

            int a = x / 100;          // hundreds digit
            int b = (x / 10) % 10;    // tens digit
            int c = x % 10;           // units digit

            // Temporarily use the digits
            freq[a]--;
            freq[b]--;
            freq[c]--;

            // If all required digits are available
            if (freq[a] >= 0 && freq[b] >= 0 && freq[c] >= 0) {
                ans++;
            }

            // Restore frequencies
            freq[a]++;
            freq[b]++;
            freq[c]++;
        }

        return ans;
    }
};