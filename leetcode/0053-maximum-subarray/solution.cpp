class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = numeric_limits<long long>::min();
        long long sum = 0;
        
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];

            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
