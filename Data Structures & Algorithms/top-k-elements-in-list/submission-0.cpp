class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i = 0; i<nums.size();i++){
            
            if(count.count(nums[i])){
                count[nums[i]]+=1;
            }else{
                count[nums[i]] = 1;
            }
        

        }
        vector<pair<int,int>>vect_count(count.begin(),count.end());
        sort(vect_count.begin(),vect_count.end(),[](auto &a,auto&b ){
            return a.second > b.second;
        });
        vector<int> result;
result.reserve(k);

for(int i = 0; i < k; i++){
    result.push_back(vect_count[i].first);
}
return result;

    }
};
