class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftmost = 0;
        int rightmost = nums.size() - 1;
        while(leftmost <= rightmost)
        {
            int middle = (leftmost + rightmost) / 2;
            if(nums[middle] == target)
            {
                return middle;
            }
            if(target < nums[middle])
            {
                rightmost = middle -1;
            }
            if(target > nums[middle])
            {
                leftmost = middle + 1;
            }
        }
        return -1;
    }
};