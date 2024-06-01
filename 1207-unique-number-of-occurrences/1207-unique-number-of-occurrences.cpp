class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
       unordered_map<int,int>ans;
        for(auto x:arr)
        {
            ans[x]++;
        }
        unordered_set<int>s;
        for(auto x:ans)
        {
            s.insert(x.second);
        }
        return s.size()==ans.size();
    }
};