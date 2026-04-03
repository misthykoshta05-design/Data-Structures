class Solution {
public:
    void reverseString(vector<char>& s) {   //function to reverse string
        int f=0;
        int e=s.size()-1;
        while(f<e){
            swap(s[f++],s[e--]);
        }
        
    }
};