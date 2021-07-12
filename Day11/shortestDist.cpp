// shortest distance
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> index;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                index.push_back(i);
        }
        vector<int> result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=c)
            {
                int mini=abs(index[0]-i);
                for(int j=1;j<index.size();j++)
                    mini=min(mini,abs(index[j]-i));
                result.push_back(mini);
            }
            else
                result.push_back(0);
        }
        return result;
    }
};