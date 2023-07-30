class Solution {
public:
    int numberOfSteps(int num) {
        //for(int i=0;i<)
        int steps=0;
        while(num){
        if((num&1)==0)
        {
            num/=2;
        }
        else
        num-=1;
        steps++;
    }
    return steps;
    }
};