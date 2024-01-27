class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int k) {
        int l = 0,r = 0,maxi = 0;
        while(r < nums.size()){
            if(nums[l] % 2 != 0 || nums[l] > k){
                l++;
                if(r < l) r = l;
            }
            else{
                if(r -l + 1 < 2 && nums[r] <= k){
                    if(r == nums.size() - 1){
                        maxi = max(maxi,r-l+1);
                    }
                    r++;
                }
                else{
                    if(nums[r] <= k && nums[r] % 2 != nums[r-1] % 2){
                        if(r == nums.size() - 1){
                            maxi = max(maxi,r-l+1);
                        }
                        r++;
                    } 
                    else{
                        maxi = max(maxi,r-l);
                        l++;
                        // r++;
                    }
                }
            }
        }
        return maxi;
    }
};