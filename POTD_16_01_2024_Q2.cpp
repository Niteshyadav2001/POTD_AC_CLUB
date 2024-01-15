class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> temp;
        int start = 0;
        int end = nums.size() - 1;
        while(start < end)
        {
            int sum = nums[start] + nums[end];
            temp.push_back(sum);
            start++;
            end--;
        }
        int maxi = INT_MIN;
        for(int i = 0;i<temp.size();i++)
        {
            maxi = max(maxi , temp[i]);
        }
        return maxi;
    }
};