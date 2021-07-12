// Keyboard Row
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> m {{'q',1},{'w',1},{'e',1},
        {'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},
        {'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},
        {'k',2},{'l',2}, {'z',3},{'x',3},{'c',3},{'v',3},{'b',3},
        {'n',3},{'m',3}};
        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            int temp=m[tolower(words[i][0])];
            int flag=0;
            for(int j=1;j<words[i].length();j++){
                if(temp!=m[tolower(words[i][j])])
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
