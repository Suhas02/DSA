class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int min_index=i;
            for(int j=i+1;j<n;j++){
                if(nums[min_index]>nums[j]){
                    min_index=j;
                }
            }
            int temp = nums[min_index];
            nums[min_index]=nums[i];
            nums[i]=temp;
        }
    }
};
