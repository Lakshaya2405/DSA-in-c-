class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int max_diff = INT_MAX;
        int closest = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[i]+nums[right]+nums[left];
                int diff = abs(target-sum);
                if(diff<max_diff){
                    max_diff = diff;
                    closest = sum;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closest;
    }
};