class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s1(nums.begin(),nums.end());
        for(int i = 1;i<=nums.size();i++){
            if(s1.find(i) == s1.end()){
                return i;
            }
        }
        return nums.size()+1;
    }

};