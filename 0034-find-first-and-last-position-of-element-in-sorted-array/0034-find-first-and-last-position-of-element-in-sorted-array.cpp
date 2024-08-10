class Solution {
public:
    int findFirstOccurrence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int first_occurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first_occurrence = mid;
            high = mid - 1; 
        } 
        else if (nums[mid] < target) 
        {
            low = mid + 1;
        } 
        else
        {
            high = mid - 1;
        }
    }

    return first_occurrence;
}

int findLastOccurrence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int last_occurrence = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last_occurrence = mid;
            low = mid + 1; 
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        } 
        else
        {
            high = mid - 1;
        }
    }

    return last_occurrence;
}

    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int first = findFirstOccurrence(nums, target);
        int last = findLastOccurrence(nums, target);

        return {first, last};

    }
};