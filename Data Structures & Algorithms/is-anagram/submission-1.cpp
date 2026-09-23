class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int s_count=0,t_count=0;
        int slen=s.size(),tlen=t.size();
        if (tlen!=slen)
            return false;
        int count[26]={0};
        for(int i=0;i<slen;i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }  
        for(int i=0;i<26;i++)
            if(count[i]!=0)
                return false;
        return true;      
    }
};
