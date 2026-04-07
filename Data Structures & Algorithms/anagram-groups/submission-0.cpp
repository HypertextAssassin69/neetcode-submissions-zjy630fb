class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count_each;
        vector<vector<string>> final;
        for(string i:strs){
            vector<int> freq(26, 0);
            for(int j:i){
                freq[j-'a']++;
            }
            string str_key = "";
            str_key.reserve(60);
            for(int k:freq){
                str_key+="#"+to_string(k);
            }
            
            count_each[str_key].push_back(i);
        }
        for(auto &p : count_each){
    final.push_back(p.second);
}

        return final;
    }
};
