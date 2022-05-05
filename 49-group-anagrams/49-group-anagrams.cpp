class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>>ans;
     if(strs.size()==0){
             return ans;
    }
        unordered_map<string,vector<string>> map;
        for(auto str:strs){
                string s=str;
                sort(s.begin(),s.end());
                map[s].push_back(str);
        }
        for(auto str:map){
                vector<string>s;
                for(int i=0;i<str.second.size();i++){
                        s.push_back(str.second[i]);
                                                     }
                ans.push_back(s);
        }
        return ans;
    }
};