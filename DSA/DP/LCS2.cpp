#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2, vector<vector<int>>dp){
   int m = s1.size();
   int n = s2.size();

   for(int i =0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if( i==0 or j==0)
                dp[i][j] = 0;
            
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
   }
   return dp[m][n];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    s1 = "sea";
    s2 = "eat";
    vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1, 0));
    cout << lcs(s1,s2,dp);
    return 0;
}