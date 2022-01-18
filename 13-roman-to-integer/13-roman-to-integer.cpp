class Solution {
public:
    int romanToInt(string s) {
       int map[256]={0};
        
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
int l=0;
        for(int i=0;i<s.length();i++){
         if(map[s[i]]<map[s[i+1]]){
             l-=map[s[i]];
         }else{
             l+=map[s[i]];
         }
        }
        return l;
      
    }
};