class Solution {
public:
    string makeGood(string s)
    {
        string temp="";
        for(char &ch : s) {
            if(temp.size() > 0 && (ch + 32 == temp.back() || ch - 32 == temp.back())) {
                temp.pop_back();
            } else {
                temp.push_back(ch);
            }
        }
        return temp;
    }
};