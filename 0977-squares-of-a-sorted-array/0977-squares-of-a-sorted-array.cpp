class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        int x = nums.size();
        for(int i=0;i<x;i++){
            if(nums[i]>=0){
                b.push_back(nums[i]*nums[i]);
            }
            else if(nums[i]<0){
                a.push_back(nums[i]*nums[i]);
            }
        }
        reverse(a.begin(),a.end());
        int i=0;
        int j=0;
        int id=0;
        int m = a.size();
        int n = b.size();
        vector<int> ans(m+n);
        while(i<m && j<n){
            if(a[i]<=b[j]){
                ans[id++] = a[i++];
            }
            else{
                ans[id++] = b[j++];
            }
        }
        while(i<m){
            ans[id++] = a[i++];
        }
        while(j<n){
            ans[id++] = b[j++];
        }
        return ans;

    }
};