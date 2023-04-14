#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int>&A,int n){
    int max = *max_element(A.begin(), A.end());
    int min = *min_element(A.begin(), A.end());
    int range = max - min + 1;
    vector<int>C(range,0);
    vector<int>B(A.size());
    for(int i=0; i<n; i++){
        C[A[i]] = C[A[i]] + 1;
    }
    // for (auto i : C)
    //     cout << i << " ";

    for(int i=1; i<n; i++){
        C[i] = C[i]+C[i-1];
    }

    for(int i=n; i>=0; i--){
        B[C[A[i]]] = A[i];
        C[A[i]] = C[A[i]] -1;
    }

    for(auto i:B)
        cout << i << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>A;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    // for (auto i : A)
    //     cout << i << " ";
    countSort(A, n);
return 0;
}