class Solution {
public:
    bool isVowel(char c){
        tolower(c);
        if(c=='a' || c=='e' ||c== 'i' ||c== 'o' ||c== 'u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
       
        int ans1=0;
        int n=s.length();

        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                ans1++;
            }
        }
        int maxvowels=ans1;
        if (maxvowels==k) return k;

        for(int i=k;i<n;i++){
            if(isVowel(s[i])){
                ans1++;
            }
            if(isVowel(s[i-k])){
                ans1--;
            }
            maxvowels=max(maxvowels,ans1);

            }
        
    return maxvowels;
    }
};