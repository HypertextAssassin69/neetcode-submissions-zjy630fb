
class Solution {
public:
    
    bool isPalindrome(string s) {
        int end = s.size() -1;
        int start = 0;
       while(end>start){
            char left  = (char)tolower(s[start]);
            char right = (char)tolower(s[end]);
             
                    while(start<end and !isalnum(left)){
                        start++;
                        left = (char)tolower(s[start]);
                    }
                    
            
                    while(end>start and !isalnum(right)){
                        end--;
                        right = (char)tolower(s[end]);
                    }
                    
            
                if(right == left){
                    start++;
                    end --;
                    
                }else {
                    return false;
                }
            

        }return true;
    
    
        
    
    }
};
