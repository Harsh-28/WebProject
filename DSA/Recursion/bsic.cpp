#include <bits/stdc++.h>
using namespace std;
void printDec(int n){
    if(n==0)
        return ;
    cout << n << " ";
    printDec(n-1);
}

void printInc(int n){
    if(n == 0)
        return ;
    cout << n << " ";
    printInc(n-1);
    cout << n << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    n = 10;
    // printDec(n);
    printInc(n);
return 0;
}