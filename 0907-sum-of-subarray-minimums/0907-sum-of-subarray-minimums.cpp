class Solution {
public:
    #define MOD 1000000007
    int sumSubarrayMins(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> ple(n, -1); 
        vector<int> nle(n, n);  

        stack<int> st;

        
        for (int i = 0; i < n; ++i) 
        {
            while (!st.empty() && arr[st.top()] > arr[i])
            {
                st.pop();
            }
            if (!st.empty()) 
            {
                ple[i] = st.top();
            }
            st.push(i);
        }

        while (!st.empty()) 
        {
            st.pop();
        }

       
        for (int i = 0; i < n; ++i) 
        {
            while (!st.empty() && arr[st.top()] > arr[i]) 
            {
                nle[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        
        long long result = 0;
        for (int i = 0; i < n; ++i) 
        {
            long long count = (i - ple[i]) * (nle[i] - i) % MOD;
            result = (result + count * arr[i]) % MOD;
        }

        return result;
        
    }
};