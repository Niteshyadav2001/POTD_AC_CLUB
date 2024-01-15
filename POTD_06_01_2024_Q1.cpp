#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag = 0;
    cin>>n;
    string temp;
    vector<string> s;
    for(int i = 0;i < n;i++)
    {
        temp = {};
        cin>>temp;
        s.push_back(temp);
    }


    //write down the soln
    for(int i = 0;i < n;i++)
    {
        int flag = 0;
        string str = s[i];
        if(str.length() == 1){
            cout<<"NO"<<endl;
            continue;
        }
        reverse(str.begin() , str.end());
        if(str != s[i]){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int j = 1;j < str.length() / 2;j++)
            {
                if(str[j-1] != str[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    } 
    return 0;
}