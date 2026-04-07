class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count_each;
        vector<vector<string>> final;
        for(string i:strs){
            string original_i = i;
            sort(i.begin(),i.end());
            count_each[i].push_back(original_i);
        }
        for(auto &p : count_each){
    final.push_back(p.second);
}

        return final;
    }
};
