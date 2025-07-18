class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans = nums.size();
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                ans = mid;
                e=mid-1;
            }
            if(nums[mid]<target){
                ans = mid+1;
                s=mid+1;
            }
        }
        return ans;
    }
};