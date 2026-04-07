class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size()!=t.size()){
            return false;
         }else{
         int count[26]= {0};
         for(int i:s){
            count[i-'a'] =count[i-'a']+1;
         }
         for(int j:t){
            count[j-'a']=count[j-'a']-1;
         }
         for(int k=0;k<26;k++ ){
            if(count[k]==0){
                continue;
            }else{
                return false;
            }

         }
         return true;
         };
    }
};
