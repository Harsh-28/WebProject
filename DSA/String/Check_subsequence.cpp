#include <bits/stdc++.h>
using namespace std;
bool checkSubsequence(string s1, string s2){
    int i=0,j=0;
    int n = s1.length(), m = s2.length();
    for(i=0,j=0; i<n and j<m; i++){
        if(s1[i] == s2[j])
            j++;
    }
    if(j == m)
        return 1;
    else
        return 0;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    string s1 = "GEEKSFORGEEKS";
    string s2 = "GFG";
    cout << checkSubsequence(s1,s2);
return 0;
}