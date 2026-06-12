class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        for(char ch:s){
            if(ch=='#'){
                if(!st1.empty())
                  st1.pop();
            }
            else{
                st1.push(ch);
            }
        }
        string str1="";
        while(! st1.empty()){
            str1+=st1.top();
            st1.pop();
        }
        stack<char>st2;
        for(char ch:t){
            if( ch=='#'){
                if(!st2.empty())
                     st2.pop();
            }
            else{
                st2.push(ch);
            }
        }
        string str2="";
        while(! st2.empty()){
            str2+=st2.top();
            st2.pop();
        }
        if(str1==str2){
            return true;
        }
        else{
            return false;
        }
    }
};
