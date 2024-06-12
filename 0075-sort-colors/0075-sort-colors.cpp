class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int temp,j,i;
        for(i=0;i<=n-1;i++)
        {
            for(j=i+1;j<=n-1;j++)
            {
                if(nums[i]>nums[j])
                {
                    int temp;
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        
    }
};