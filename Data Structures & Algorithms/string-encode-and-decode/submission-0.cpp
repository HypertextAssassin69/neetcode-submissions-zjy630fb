class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded ="";
        for(const string& i:strs){
                encoded += to_string(i.size())+"#"+i;
        }
        return encoded;
    }

    vector<string> decode(string s) {
            vector<string> decoded;

            int i = 0;
            while(i<s.size()){
                int len = 0;
                while(s[i]!='#'){
                len = len*10+(s[i]-'0');
                i++;
                }
                i++;
                string word = s.substr(i,len);
                decoded.push_back(word);
                i+=len;


            }
                      return decoded;
    }
};
