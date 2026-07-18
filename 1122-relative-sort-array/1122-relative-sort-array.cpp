class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int,int> freq;
        for(int x : arr1)
            freq[x]++;

        vector<int> ans;
        for(int x : arr2) {
            while(freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
            freq.erase(x);
        }
        vector<int> temp;

        for(auto &p : freq) {
            while(p.second--) {
                temp.push_back(p.first);
            }
        }
        sort(temp.begin(), temp.end());
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};