class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> woa;
        for(int i=0;i+1<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                woa.push_back(i);
                woa.push_back(j);
            }
            }
        }
        return woa;
    }
};
