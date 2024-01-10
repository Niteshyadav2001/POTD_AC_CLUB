#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    string s;
    stack<char>st;
    //taking the input
    for(int i = 0;i < n;i++)
    {
        cin>>ch;
        s.push_back(ch);
    }

    //writing down the soln
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        //if stack is empty
        if(st.empty()) st.push(s[i]);
        //we found 'x' on string 
        else if(s[i] == 'x')
        {
            //if top element of stack is 'x'
            if(st.top() == 'x')
            {
                st.pop();
                if(!st.empty())
                {
                    //if second top element of stack is 'x'
                    //we remove the one 'x'
                    if(st.top() == 'x')
                    {
                        st.push('x');
                        count++;
                        continue;
                    }
                    else{
                        st.push('x');
                        st.push(s[i]);
                    }
                }
                else{
                    st.push('x');
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }
    //print the minimum no. of characters to remove
    cout<<count;
    return 0;
}
