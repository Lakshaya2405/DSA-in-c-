class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int left = 0;
        while(left < nums.size()){
            ans.push_back(nums[left]*nums[left]);
            left++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};