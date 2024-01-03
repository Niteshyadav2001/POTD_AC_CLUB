//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int minMoves(int a[], int n, int k);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
	   
    	cout<<minMoves(a,n,k)<<"\n";
	}
	return 0;
}

// } Driver Code Ends


int minMoves(int a[], int n, int k)
{
    long moves = 0;
    for(int i = 1;i < n;i++)
    {
        if(a[i] > a[i-1])
        {
            long diff = ceil((double)((a[i] - a[i-1]))/(double)k);
            a[i] = a[i] - k*diff;
            moves += diff;
        }
    }
    return moves%1000000007;
}
