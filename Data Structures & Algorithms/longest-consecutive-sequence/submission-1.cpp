class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int max = 0;
          for(int i: nums){
            int count = 1;
            if(num_set.count(i-1) ==0){
                int start = i; 
                while(num_set.count(start +1) !=0){
                    count++;
                    start++;                    
                } 
                if(max<count) max = count;
                
                
            }else{
                continue;
            }
        }
    return max;
    }
};
