// Most common words

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    for(int i=0;i<paragraph.length();i++)
        paragraph[i]= isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ';
        unordered_map<string,int> result;
        unordered_set<string> set(banned.begin(),banned.end());
        stringstream s(paragraph);
        string word;
        while(s>>word)
        {
            if(!set.count(word))
                result[word]++;
        }
        string temp;
        int freq=INT_MIN;
        for(auto i:result)
        {
            if(i.second > freq)
            {
                freq=i.second;
                temp=i.first;
            }
        }
        return temp;
    }
};