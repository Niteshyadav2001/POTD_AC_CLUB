#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count = 0;
        vector<int> arr(n);
        for(ll i = 0;i < n;i++){
            ll num;
            cin>>num;
            if(num > 1){
                count = count + num - 1;
            }
        }
        if(count % 2 == 0)
        {
            cout<<"maomao90"<<endl;
        }
        else cout<<"errorgorn"<<endl;
    }
    return 0;
}