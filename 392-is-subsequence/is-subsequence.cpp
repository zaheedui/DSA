class Solution {
public:
    bool isSubsequence(string s, string t) {
        // int i=0;
        // int j=0;
        // int strLength = t.length();
        // int substrLength = s.length();

        // while(i<substrLength && j<strLength ){
        //     if(j<strLength && (s[i]==t[j])){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //     j++;
        //     if(s[i]==s.length()-1){
        //         return true;}
        // }
        // return false;

        int i=0;
        int j=0;

        int sLen=s.length();
        int tLen =t.length();

        while(i<sLen && j<tLen){
            if(s[i]==t[j]){
                i++;
            }
            j++;

        }
        return sLen==i;
    }
};