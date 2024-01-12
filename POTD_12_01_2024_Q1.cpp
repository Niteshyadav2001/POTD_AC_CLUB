#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--){
        ll no_elements;
        cin>>no_elements;
        vector<ll> arr(no_elements);
        for(int j = 0;j < no_elements;j++){
            cin>>arr[j];
        }
        sort(arr.begin() , arr.end());
        ll a = arr[0]*arr[1], b = arr[no_elements - 1]*arr[no_elements - 2];
        ll result = max(a, b);
        cout<<result<<endl;
    }
    return 0;
}