#include <bits/stdc++.h>
using namespace std;

int signum(int n){
    if (n != 0)
        return n > 0 ? 1 : -1;
 
    else
        return 0;
}
int maxZigZag(int seq[], int n){
    if (n == 0)
        return 0;

    int lastSign = 0, length = 1;
    for (int i = 1; i < n; ++i){
        int Sign = signum(seq[i] - seq[i - 1]);
        if (Sign != lastSign && Sign != 0)
            lastSign = Sign;
            length++;
    }
    return length;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n[] = {1,5,4};
    cout << maxZigZag(n,3) << endl;

    
return 0;
}