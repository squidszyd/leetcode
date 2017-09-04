//  Tags:   [array][binary search]
class Solution {
public:
    int lower_bound(vector<int>& nums, int target){
        int lo = 0, hi = nums.size() - 1, mid;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            if(nums[mid] < target)  lo = mid + 1;
            else    hi = mid - 1;
        }
        return lo;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0)    return {-1, -1};
        int lo = lower_bound(nums, target);
        int hi = lower_bound(nums, target + 1);
        if(lo >= len || nums[lo] != target) return {-1, -1};
        return {lo, hi - 1};
    }
};
