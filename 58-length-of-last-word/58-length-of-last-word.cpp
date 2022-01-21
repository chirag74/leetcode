class Solution {
public:
    int lengthOfLastWord(string s) {
    reverse(s.begin(),s.end());
        int c=0;
        for(int i=0;i<s.length();i++){
         if(s[i]!=' '){
             c++;
             
         }   
            else if(s[i]==' '){
                if(c>0){
                    break;
                }
            }
        }
        return c;
    }
};