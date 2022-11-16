class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0,bob=0,i=0,j= piles.size()-1;
        while(i < j){
            alice+= (piles[i] - piles[i+1]) > (piles[j] - piles[j-1]) ? piles[i], i++ : piles[j],j--;
        }
        return alice > bob;
    }
};