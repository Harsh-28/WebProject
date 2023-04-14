#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int knapSackRecursiveSol(int wt[], int val[], int w, int n){
    if(n == 0 or w == 0)
        return 0;
    
    if(wt[n-1] <= w){
        return max(val[n-1] + knapSackRecursiveSol(wt, val, w-wt[n-1], n-1), knapSackRecursiveSol(wt, val, w, n-1));
    }

    else
        return knapSackRecursiveSol(wt, val, w, n-1);
}

int knapSackMemoizationSol(int wt[], int val[], int w, int n, int dp[][50]){
    if(n == 0 or w ==0)
        return 0;
    
    if(dp[n][w] != -1)
        return dp[n][w];
    
    if(wt[n-1] <= w){
        dp[n][w] = max(val[n-1] + knapSackRecursiveSol(wt, val, w-wt[n-1], n-1), knapSackRecursiveSol(wt, val, w, n-1));
        return dp[n][w];
    }
    else{
        dp[n][w] = knapSackRecursiveSol(wt, val, w, n-1);
        return dp[n][w];
    }
}

int knapSackDpPure(int wt[],)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
return 0;
}




