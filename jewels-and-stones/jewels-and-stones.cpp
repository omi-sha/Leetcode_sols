class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto stone:stones)
        {
            for(auto jewel:jewels)
            {
                if(jewel==stone)
                count++;
            }
        }
        return count;
    }
};