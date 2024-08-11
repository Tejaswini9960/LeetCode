class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int missing_count = 0;
        int current_num = 1;
        int i = 0;
        int n = arr.size();

        while (missing_count < k)
        {
            if (i < n && arr[i] == current_num)
            {
                i++;
            }
            else
            {
                missing_count++;
                if (missing_count == k)
                {
                    return current_num;
                }
            }
            current_num++;
        }

        return -1;
        
    }
};