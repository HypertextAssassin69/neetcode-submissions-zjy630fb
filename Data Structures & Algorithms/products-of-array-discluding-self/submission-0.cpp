class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        for(int i = 1 ; i<nums.size();i++){
            left[i] = left[i-1]*nums[i-1];
        }
        vector<int> right(nums.size(),1);
        for(int j =nums.size()-1 ; j>0; j--){
            right[j-1] = right[j]*nums[j];
        }
        vector<int> left_right(nums.size());
        for(int k = 0 ; k<nums.size();k++){
            left_right[k] = left[k]*right[k];
        }
        return left_right;
    }
};
