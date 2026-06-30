class Solution {
public:
    bool isAnagram(string s, string t) {
        int c[26] = {0};

        
        if (s.size()==t.size())
        {
          for(int i=0;i<s.size();i++)
          c[s[i]-'a']++;
          for(int j=0;j<t.size();j++)
          c[t[j]-'a']--;
          for(int i=0;i<26;i++)
          {if(c[i]!=0)
          return false;}
      
        return true;

        }return false;
    }
};
