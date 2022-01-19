class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> st;
        
        for(int i=1;i<=n;i++){
            if(i%15==0){
                st.push_back("FizzBuzz");
            }
            else if(i%5==0){
                st.push_back("Buzz");
            }
            else if(i%3==0){
                st.push_back("Fizz");
            }
            else{
                string str=to_string(i);
                st.push_back(str);
            }
        }
        return st;
    }
};