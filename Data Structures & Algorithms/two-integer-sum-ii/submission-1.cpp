class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0 ;
        int end = numbers.size()-1;
        while(end>start){
            if(numbers[start]+numbers[end]>target){
                end--;
                
            }else if(numbers[start]+numbers[end]<target){
                start++;
            }else{
               vector<int> out={start+1,end+1};
               return out;
            }
        }


        
    } 
};
