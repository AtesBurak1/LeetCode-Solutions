class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int sum{0},ma{0};
        sort(satisfaction.begin(), satisfaction.end());
        for(int i{0}; i < satisfaction.size(); i++){
            sum = 0;
            int c=1;
            for(int j{i}; j < satisfaction.size(); j++){
                sum += c * satisfaction[j];
                c++;
            }
            ma = max(sum,ma);
        }
        return ma;
    }
    
};