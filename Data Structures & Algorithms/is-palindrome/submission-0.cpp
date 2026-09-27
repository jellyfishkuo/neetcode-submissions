class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(),m=0;
        string ss="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')
            {
                ss+=tolower(s[i]);
                m++;
            }
        }
        for(int i=0;i<m/2;i++)
            if(ss[i]!=ss[m-i-1]) return false;
        return true;
    }
};
