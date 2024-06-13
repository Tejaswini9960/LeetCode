class Solution {
public:
    bool valid(char ch)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    char lowercase(char ch)
    {
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        {
            return ch; 
        }
        else
        {
            char temp=ch-'A'+'a';
                return temp;
        }
        
    }
    bool pallindrome(string s)
    {
        int st=0;
        int e=s.length()-1;
        while(st<=e)
        {
            if(s[st++]!=s[e--])
            {
                return  false;
            }
        }
        return true;
    }
    
    bool isPalindrome(string s)
     {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(valid(s[i]))
            {
                temp+=s[i];
            }
        }
        for(int i=0;i<temp.length();i++)
        {
           temp[i]=lowercase(temp[i]);
        }
        
        return pallindrome(temp);
        
        
    }
    
        
    
    
};