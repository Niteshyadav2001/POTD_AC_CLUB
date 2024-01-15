#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str = "codeforces";
    string temp;
    vector<string> s;
    for(int i = 0;i < n;i++)
    {
        temp = {};
        cin>>temp;
        s.push_back(temp);
    }

    //write ans
    for(int i = 0;i < n;i++)
    {
        int count = 0;
        string t = s[i];
        for(int j = 0;j < t.length();j++)
        {   
            if(str[j] != t[j]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}