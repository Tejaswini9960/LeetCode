class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> st;

        for (int asteroid : asteroids) 
        {
            bool collision = false;

            while (!st.empty() && st.top() > 0 && asteroid < 0) 
            {
                if (abs(st.top()) < abs(asteroid))
                {
                    st.pop();
                    continue;
                }
                else if (abs(st.top()) == abs(asteroid)) 
                {
                    st.pop();
                }
                collision = true;
                break;
            }

            if (!collision) 
            {
                st.push(asteroid);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; --i) 
        {
            result[i] = st.top();
            st.pop();
        }

        return result;
        
    }
};