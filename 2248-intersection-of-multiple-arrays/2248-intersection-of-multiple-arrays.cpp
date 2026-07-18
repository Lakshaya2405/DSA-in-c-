class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       int d = nums.size();
       set<int> s1(nums[0].begin(),nums[0].end());
       for(int i=1;i<d;i++){
        set<int> s2(nums[i].begin(),nums[i].end());
        set<int> result;
        set<int> s3 = {3,4,5};
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(result,result.begin()));
        s1 = result;
       } 
       vector<int> v2(s1.begin(),s1.end());
       return v2;
    }
};