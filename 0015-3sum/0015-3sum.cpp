class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int p = 0; p < nums.size() - 2; p++) {
            if (p > 0 && nums[p] == nums[p - 1])
                continue;
            int q = p + 1;
            int r = nums.size() - 1;
            while (q < r) {
                int sum = nums[p] + nums[q] + nums[r];
                if (sum == 0) {
                    ans.push_back({nums[p], nums[q], nums[r]});
                    while (q < r && nums[q] == nums[q + 1])
                        q++;
                    while (q < r && nums[r] == nums[r - 1])
                        r--;
                    q++;
                    r--;
                }
                else if (sum < 0) {
                    q++;
                }
                else {
                    r--;
                }
            }
        }
      return ans;
    }
};