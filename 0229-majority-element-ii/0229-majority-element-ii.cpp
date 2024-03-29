class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int c1=0;
	int c2=0;
	int e1=INT_MIN;
	int e2=INT_MIN;
	int n=nums.size();
	for(int i=0;i<n;i++)
	{
		if(c1==0&&e2!=nums[i])
		{
			c1=1;
			e1=nums[i];
		}
		else if(c2==0&&e1!=nums[i])
		{
			c2=1;
			e2=nums[i];
		}
		else if(nums[i]==e1) c1++;
		else if (nums[i]==e2) c2++;
		else{
			c1--;
			c2--;

		}
	}
	vector<int>ans;
	c1=0;
	c2=0;
	for(int i=0;i<n;i++)
	{
		 if(nums[i]==e1) c1++;
		if (nums[i]==e2) c2++;
	}
	int mini=(int)(n/3)+1;
	if(c1>=mini) ans.push_back(e1);
	if(c2>=mini) ans.push_back(e2);
	sort(ans.begin(),ans.end());
	return ans;
        
    }
};