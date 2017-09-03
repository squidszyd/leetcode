// Tags:    [array]
class Solution {
   public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len(nums.size()), sum(0), min_len(INT_MAX), start(0);
        if(s <= 0 || len == 0)    return 0;
        for(int i = 0; i < len; ++i){
            sum += nums[i];
            while(sum >= s){
                min_len = min(min_len, i - start + 1);
                sum -= nums[start++];
            }
        }
        return min_len == INT_MAX ? 0 : min_len;
    }
};
