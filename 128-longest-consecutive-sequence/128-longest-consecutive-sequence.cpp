class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> s;
        int largest=0;
        int n=nums.size();
        for(int i : nums){
            s.insert(i);
        }
       for(auto element : s){
           int parent=element-1;
           if(s.find(parent)==s.end()){
               int next=element+1;
               int count=1;
               while(s.find(next)!=s.end()){
                   next++;
                   count++;
               }
               if(count>largest){
                   largest=count;
               }
           }
       }
        return largest;
        
    }
};