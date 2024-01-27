class Solution {
public:
    int divisorSubstrings(int n, int k) {
        vector<int> nums;
        int store_num = n;
        while(n != 0){
            int rem = n % 10;
            nums.push_back(rem);
            n /= 10;
        }
        reverse(nums.begin() , nums.end());
        if(nums.size() < k) return 0;
        if(nums.size() == k) return 1;
        int i = 0,j = 0,count = 0;
        long long temp = 0;
        while(j < nums.size()){
            if(j - i + 1 < k){
                temp = temp*pow(10,1) + nums[j];
                j++;
            }
            else if(j - i + 1 == k){
                int tp1 = pow(10,k-1);
                temp = temp*pow(10,1) + nums[j];
                cout<<temp<<" ";
                if(temp != 0 && store_num % temp == 0) ++count;
                temp = temp % tp1;
                i++;
                j++;
            }
        }
        return count;
    }
};