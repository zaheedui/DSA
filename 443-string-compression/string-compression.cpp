class Solution {
public:
    int compress(vector<char>& chars) {
    //   int write=0;
    //   int read=0;
    //   int n=chars.size();

    //   while(read<n){
    //     char curr=chars[read];
    //     int count=0;

    //     if(read<n && chars[read]==curr){
    //         read++;
    //         write++;
    //     }
    //     chars[write++] = curr;

    //     if(count>1){
    //         for(char digit : to_string(count)){
    //             chars[write++]=digit;
    //         }
    //     }
    //   }
    //   return write;

    int write = 0;
        int read = 0;
        int n = chars.size();

        while (read < n) {
            char curr = chars[read];
            int count = 0;

            // Use WHILE to count all matching consecutive characters
            while (read < n && chars[read] == curr) {
                read++;
                count++;
            }

            // Write the character at the current write position
            chars[write++] = curr;

            // If the character appeared more than once, write its count
            if (count > 1) {
                for (char digit : to_string(count)) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};