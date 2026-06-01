
class Solution {
public:
    
bool isPalindrome(const string &s){
        int end = s.size() -1;
        int start = 0;
       while(end>start){
            
             
                    while(start<end and !isalnum(s[start])){
                        start++;
                        
                    }
                    
            
                    while(end>start and !isalnum(s[end])){
                        end--;
                        
                    }
                    
            
                if((char)tolower(s[start])==(char)tolower(s[end])){
                    start++;
                    end --;
                    
                }else {
                    return false;
                }
            

        }return true;
    
    
        
    
    }
};
