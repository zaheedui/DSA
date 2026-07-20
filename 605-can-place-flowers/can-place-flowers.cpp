class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       if(n==0) return true;

       int i=0;
       int size=flowerbed.size();

       while(i<size){
        if(flowerbed[i]==0){
            bool leftEmpty= (i==0 || flowerbed[i-1]==0);
            bool rightEmpty= (i==size-1 || flowerbed[i+1]==0);

            if(leftEmpty && rightEmpty){
                n--;

                if(n==0){
                    return true;
                }
                i=i+2;

                continue;
            }
        }
        i++;
       }

       return n<=0;
    }
};