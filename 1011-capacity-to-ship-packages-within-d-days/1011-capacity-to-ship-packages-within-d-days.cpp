class Solution {
public:
bool canShipInDays(const vector<int>& weights, int days, int capacity)
{
    int currentWeight = 0;
    int requiredDays = 1;

    for (int weight : weights)
    {
        if (currentWeight + weight > capacity)
        {
            requiredDays++;
            currentWeight = weight;
            if (requiredDays > days)
            {
                return false;
            }
        } 
        else
        {
            currentWeight += weight;
        }
    }
    
    return true;
}
    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (canShipInDays(weights, days, mid))
            {
                high = mid;
            } 
            else
            {
                low = mid + 1;
            }
        }

        return low;
        
    }
};