class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        int freq[10] = {0};
        while(n!=0){
            int digit = n%10;
            freq[digit]++;
            n = n/10;
        }
        for(int i=0;i<10;i++){
            ans += i*freq[i]; 
        }
        return ans;
    }
};