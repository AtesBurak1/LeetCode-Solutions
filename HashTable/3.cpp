class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,max=0,j=0,k=0,flag,flag2;
        vector <char> myvec;
        vector <char>::iterator it;
        while(i<s.length())
        {
            k=i;
            while(k<s.length())
            {
                it=find(myvec.begin(),myvec.end(),s[k]);
                if(it==myvec.end())
                {
                    myvec.push_back(s[k]);
                }
                else
                    break;
                k++;
            }
            if(myvec.size()>max)
                max=myvec.size();
            i++;
            myvec.clear();
        }
        return max;
    }
};