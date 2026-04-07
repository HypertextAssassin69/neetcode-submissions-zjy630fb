class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> flask;
        for(int i =0 ; i<nums.size();i++){
            int diff = target - nums[i];
            if(flask.count(diff)){
                return{flask[diff],i};

            }else{
                flask[nums[i]] = i;
            }
        }
    }
};
