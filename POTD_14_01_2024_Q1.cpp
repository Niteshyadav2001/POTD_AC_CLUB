class Solution {
public:
    vector<int> diStringMatch(string s) {
        int start = 0;
        int end = s.length();
        vector<int> arr;
        for(int i = 0;i < s.length();i++){
            if(s[i] == 'I'){
                arr.push_back(start);
                start++;
            }
            else if(s[i] == 'D'){
                arr.push_back(end);
                end--;
            }
        }
        arr.push_back(start);
        return arr;
    }
};