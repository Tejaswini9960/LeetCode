class Solution {
public:
    int trap(vector<int>& height)
     {
         int res=0;
         int n=height.size();
         int l=0;
         int r=n-1;
         int lmax=0;
         int rmax=0;
         while(l<r)
         {
             if(height[l]<=height[r])
             {
                 if(height[l]>=lmax)
                 {
                     lmax=height[l];
                 }
                 else
                 {
                     res=res+lmax-height[l];
                 }
                 l++;
             }
             else
             {
                 if(height[r]>=rmax)
                 {
                     rmax=height[r];
                 }
                 else
                 {
                     res=res+rmax-height[r];

                 }
                 r--;

             }
         }
         return res;
        
    }
};