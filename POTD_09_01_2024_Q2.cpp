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
        vector<ll> arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        vector<ll> temp;
        for(auto k : arr){
            temp.push_back(k);
        }
        sort(temp.begin() , temp.end());
        if(arr != temp) cout<<"0"<<endl;
        else{
            int mini = INT_MAX;
            for(int i = 1;i < n;i++){
                int num = arr[i] - arr[i-1];
                mini = min(mini,num);
            }
            cout<<mini/2+1<<endl;
        }
    }
    return 0;
}