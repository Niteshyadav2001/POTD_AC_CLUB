#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string temp;
    vector<string> str;
    for(int i = 0;i < n;i++)
    {
        temp = {};
        cin>>temp;
        str.push_back(temp);
    }

    //writing down the solutions
    for(int i = 0;i < n;i++)
    {
        string s = str[i];
        if(s == "abc") cout<<"YES"<<endl;
        else if(s[0] == 'c' && s[2] == 'a') cout<<"YES"<<endl;
        else if(s[0] == 'b' && s[1] == 'a') cout<<"YES"<<endl;
        else if(s[1] == 'c' && s[2] == 'b') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}