class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int right = s.length() - 1;
        while (right >= 0) {
            while (right >= 0 && s[right] == ' ') {
                right--;
            }
            if (right < 0) {
                break;
            }
            int left = right;
            while (left >= 0 && s[left] != ' ') {
                left--;
            }
            if (ans != "") {
                ans += " ";
            }
            for (int i = left + 1; i <= right; i++) {
                ans += s[i];
            }
            right = left - 1;
        }
        return ans;
    }
};