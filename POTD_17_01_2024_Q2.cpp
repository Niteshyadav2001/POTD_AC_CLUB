class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() == 1) return false;
        vector<pair<int,int>> v(nums.size());
        for(int i = 0;i < nums.size();i++){
            v[i].first = nums[i];
            v[i].second = i;
        }
        sort(v.begin(),v.end());
        for(int i = 0;i < nums.size() - 1;i++){
            if(v[i].first == v[i+1].first && abs(v[i].second - v[i+1].second) <= k)
            return true;
        }
        return false;
    }
};