class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =  nums.size();
        int st = 0;
        int end = n - 1;
        while(end >= st){
            int mid = st + (end - st)/2;
            if(target == nums[mid]) {
                return mid;
            }
            if(nums[st] <= nums[mid]){
                if(target >= nums[st] && target <= nums[mid]){
                    end = mid - 1;
                }else{
                    st = mid + 1;
                }
            }else{
                if(nums[mid] <= target && nums[end] >= target){
                    st = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;
        
    }
};