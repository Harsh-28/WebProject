#include <bits/stdc++.h>
using namespace std;
int addTwoNo(int x, int y){
    if(y == 0)
        return x;
    
    return (1+addTwoNo(x, y-1));
}


int minOprations(int x, int y, int p,int q){
    int ans = 0;
    if(x > y)
        return -1;
    if(x == y)
        return 0;
    int l = minOprations(x*p, y, p, q);
    int r = minOprations(x*q, y , p, q);

    if(l == -1 and r == -1)
        ans = -1;

    else if(r == -1)
        ans = l;
    
    else if(l == -1)
        ans = r;
    
    else
        ans = min(l , r);

    if(ans!= -1)
        ans += 1;
    return ans;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << minOprations(12,2592,2,3);
return 0;
}