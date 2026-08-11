class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        long long maxwater = 0;
        while(left<right){
            long long w = right-left;
            long long b = min(height[left],height[right]);
            maxwater = max(maxwater,w*b);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxwater;
    }
};