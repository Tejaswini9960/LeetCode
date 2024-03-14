class Solution {
public:
    vector<int>ROws(int r)
{   long long ans=1;
    vector<int>rans;
    rans.push_back(1);
    for(int i=1;i<r;i++)
    {
        ans=ans*(r-i);
        ans=ans/i;
        rans.push_back(ans);
    }
    return rans;
}
    vector<vector<int>> generate(int numRows)
     {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(ROws(i));
        }
        return ans;
        
     }
};