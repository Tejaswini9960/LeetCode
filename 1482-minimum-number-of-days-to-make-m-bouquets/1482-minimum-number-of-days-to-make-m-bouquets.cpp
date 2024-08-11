class Solution {
public:
    bool possible(const vector<int>& bloomDay, int days, int m, int k) {
    int bouquets = 0, flowers = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= days)
        {
            flowers++;
            if (flowers == k)
            {
                bouquets++;
                flowers = 0;
            }
        }
        else 
        {
            flowers = 0; 
        }
        if (bouquets >= m) 
        {
            return true;
        }
    }
    return bouquets >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) 
 {
               long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size(); 
        if (val > n) return -1;

        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

    
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(bloomDay, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
    }
};