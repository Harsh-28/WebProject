#include <bits/stdc++.h>
using namespace std;
int slove(string s1, string s2,int m, int n,vector<vector<int>> dp){
    if(m == 0 or n == 0){
        dp[m][n] = 0;
        return dp[m][n];
    }

    if(dp[m][n] != -1)
        return dp[m][n];

    if (s1[m - 1] == s2[n - 1]){
        dp[m][n] = 1 + slove(s1, s2, m - 1, n - 1, dp); 
        return dp[m][n];
    }
    dp[m][n] = max(slove(s1, s2, m - 1, n, dp), slove(s1, s2, m, n - 1, dp));
        return dp[m][n];
}


int lcs(string s1, string s2){
    vector<vector<int>> dp(s1.length()+1 ,vector<int> (s2.length()+1, -1));
    return slove(s1,s2,s1.length(),s2.length(),dp);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    s1 = "oxcpqrsvwf";
    s2 = "shmtulqrypy";

    cout << lcs(s1,s2);
return 0;
}