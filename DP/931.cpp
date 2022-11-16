int min2(int a,int b,int c){
    if(a < b){
        if(a < c)
            return a;
        else
            return c;
    }else
        if(b < c)
            return b;
        else 
            return c;
    return -1;
}
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int dp[n][n];
        for(int i=n-1; i>=0; i--){
            dp[n-1][i] = matrix[n-1][i];
        }
        for(int i{n-2}; i >=0; i--){
            for(int j{0}; j < n; j++){
                if(j == 0 ){
                    dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]) + matrix[i][j];
                }else if( j == n-1){
                    dp[i][j] = min(dp[i+1][j],dp[i+1][j-1]) + matrix[i][j];
                }else
                    dp[i][j] = min2(dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]) + matrix[i][j];
            }
        }
        int ans = 9999999;
        for(int i{0}; i <n; i++){
            ans = min(ans,dp[0][i]);
        }
        return ans;
    }
};