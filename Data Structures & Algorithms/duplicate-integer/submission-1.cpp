class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(),nums.end());
        if (num_set.size() == nums.size()){
            return false;

        }else{
            return true;
        }
        
    }
};