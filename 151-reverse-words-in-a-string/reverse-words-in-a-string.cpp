class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        ans.reserve(s.length());

        int j = s.length()-1;

        while(j>=0){

        while(j>=0 && s[j] == ' '){
            j--;
        }

        if(j<0) break;

        int i=j;

        while(i>=0 && s[i] != ' '){
            i--;
        }

        if(!ans.empty()){
            ans+=" ";
        }
        ans+=s.substr(i+1,j-i);
        j=i;
    }
      return ans;
    }
};