
class Solution {
public:
    
    bool isPalindrome(string s) {
        int end = s.size() -1;
        int num = s.size() -1;
        int start = 0;
       while(end>start){
            char left  = (char)tolower(s[start]);
            char right = (char)tolower(s[end]);
             if(!isalnum(char(left))){
                    while(start<end and !isalnum(left)){
                        start++;
                        left = (char)tolower(s[start]);
                    }
                    
            }else if(!isalnum(char(right))){
                    while(end>start and !isalnum(right)){
                        end--;
                        right = (char)tolower(s[end]);
                    }
                    
            }else{
                if(right == left){
                    start++;
                    end --;
                    continue;
                }else {
                    return false;
                }
            }

        }return true;
    
    cout<< s;
        
    
    }
};
