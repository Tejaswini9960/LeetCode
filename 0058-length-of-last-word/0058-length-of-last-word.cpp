class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int len=0;
        bool flag=false;
        for(int i=s.length()-1;i>=0;i--)
        {
            char ch=s[i];
            if(ch==' '&&flag==true)
            {
                break;
            }
            else if(ch!= ' ')
            {
                flag=true;
                len++;
            }
        }
        return len;
        
    }
};