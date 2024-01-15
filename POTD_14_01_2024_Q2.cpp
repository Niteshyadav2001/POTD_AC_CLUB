#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans;
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else{
            ans.push_back('.');
            if(s[i] < 91) s[i] += 32;
            ans.push_back(s[i]);
        }
    }
    cout<<ans;
    return 0;
}