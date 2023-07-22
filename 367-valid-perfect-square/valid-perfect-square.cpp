class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int n=0;

        while(num>=n*n){
            if(num == n*n){
                return true; 
            }
            n++;
        }

        return false;
    }
};