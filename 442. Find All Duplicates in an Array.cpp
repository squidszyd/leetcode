// Tags:    [array]
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            int ind = abs(nums[i]) - 1;
            if(nums[ind] < 0)   res.push_back(ind + 1);
            else  nums[ind] = -nums[ind];
        }
        return res;
    }
};
