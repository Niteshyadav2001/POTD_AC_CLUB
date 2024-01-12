#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll no_elements,k;
        char ch;
        bool flag = true;
        cin>>no_elements>>k;
        string str;
        while(no_elements--){
            cin>>ch;
            if(flag && int(ch - '0') < k){
                str.push_back(char(k + '0'));
                str.push_back(ch);
                flag = !flag;
            }
            else{
                str.push_back(ch);
            }
        }
        if(flag){
            char temp = char(k + '0');
            cout<<str+temp<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
}