class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        stack<int> st;
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')')
            {
                if(st.size() != 1) st.pop();
                else if(st.size() == 1)
                {
                    int start = st.top();
                    int end = i;
                    if(start+1 < end-1)
                    {
                        string temp = s.substr(start+1 , end-1-start);
                        str = str+temp;
                        temp = {};
                    }
                    st.pop();
                }
            }
        }
        return str;
    }
};