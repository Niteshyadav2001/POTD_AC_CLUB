class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int div = nums.size() / 2;
        int flag = 1;
        int result = 0;
        sort(nums.begin() , nums.end());
        if(nums.size() == 1)
        {
            result = nums[0];
        }
        else{
        for(int i = 0;i<nums.size() - 1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                ++flag;
                if(flag > div)
                {
                    result = nums[i];
                    break;
                }
            }
            else
            {
                if(flag > div)
                {
                    result = nums[i];
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        return result;
    }
};