class Solution {
public:
    void reverse(string &s,int left,int right){
        while(left<right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
    string reverseWords(string s) {
        int start=0;
        for(int i=0;i<=s.length();i++){
            if((s[i]==' ')||(i==s.length())){
               reverse(s,start,i-1);
               start=i+1;
            }
        }
    return s;
        
        
    }
};