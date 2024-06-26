class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        unordered_set<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n&&j<m)
        {
            if(nums1[i]==nums2[j])
            {
                ans.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        vector<int>a(ans.begin(),ans.end());
        return a;
        
    }
};