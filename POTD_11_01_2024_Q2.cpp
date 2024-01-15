#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //no. of test cases
    ll t;
    cin>>t;
    while(t--){
        //no. of sub test cases
        ll t1;
        cin>>t1;
        vector<ll>arr(t1);
        //no. of elments in array
        for(ll i = 0;i < t1;i++){
            cin>>arr[i];
        }
        for(ll j = 0;j < t1;j++){
            ll n;
            cin>>n;
            for(ll i = 0;i < n;i++){
                char ch;
                cin>>ch;
                if(ch == 'D'){
                    if(arr[j] == 9) arr[j] = 0;
                    else arr[j] += 1;
                }
                else if(ch == 'U'){
                    if(arr[j] == 0) arr[j] = 9;
                    else arr[j] -= 1;
                }
            }
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}