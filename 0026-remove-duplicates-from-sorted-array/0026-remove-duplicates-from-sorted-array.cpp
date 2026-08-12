class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int left = 0;
       int right = 1;
       int ans = 1;
       while(right<nums.size()){
        if(nums[left] == nums[right]){
            right++;
        }
        else{
            nums[left+1] = nums[right];
            left++;
            ans++;
        }
       }
       return ans;
    }
};