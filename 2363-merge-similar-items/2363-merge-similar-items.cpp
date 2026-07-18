class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m1;
        for(auto i : items1){
             m1[i[0]] += i[1];
        }
        for(auto i : items2){
            m1[i[0]] += i[1];
        }
        vector<vector<int>> ret;
        for(auto &i : m1){
            ret.push_back({i.first,i.second});
        }
        return ret;
    }
};