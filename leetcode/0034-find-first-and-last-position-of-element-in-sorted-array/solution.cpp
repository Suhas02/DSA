class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int first = findBound(nums, target, true);
       if(first == -1) return {-1,-1};
       int last = findBound(nums, target, false);
       return {first,last};
    }
private:
     int findBound(vector<int>& nums, int target, bool isFirst){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans = -1;
        
        while(start <= end){
          int mid = start + (end - start)/2;
          if(nums[mid]==target){
            ans = mid;
            if(isFirst) end = mid - 1;
            else start = mid + 1;
          } else if(nums[mid]>target){
             end = mid - 1;
          } else {
            start = mid + 1;
          }
        }
        return ans;
     }
};
