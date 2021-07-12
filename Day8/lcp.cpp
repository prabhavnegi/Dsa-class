#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)    return "";
        for(int i = 0; i<strs[0].length(); i++)
        {
            char ch=strs[0][i];
            for(int j = 1; j<strs.size(); j++)
            {
                if(i==strs[j].length() || ch!=strs[j][i])
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
}


int main()
{
    int n;
    cin>>n;
    vector<string> strs(n,"");
    for(int i = 0; i<n; i++)
        cin>>strs[i];
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}