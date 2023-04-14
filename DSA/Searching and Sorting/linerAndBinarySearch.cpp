#include <bits/stdc++.h>
using namespace std;
int binarySearch(int* arr, int x, int l, int r){
    if(l <= r){
        int m = l + (r - l)/2;
        if(arr[m] == x) return m;
        else if(arr[m] < x) return binarySearch(arr,x,m+1,r);
        else return binarySearch(arr,x,l,m-1);
    }
    return -1;
}

// int linear
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cout <<"Enter the Size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        arr[i] = rand() % 5000;


    
    int target = rand() % 1000;
    cout << target << endl;



    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    clock_t t;
    t = clock();
    int res = binarySearch(arr,target,0,n-1);
    t = clock() - t;
    if(res == -1)
        cout <<"Not Found!!!";
    else 
        cout << "Found at Index = " << res << endl;
    
    cout <<"Binary serch takes " << t << "ms to execute";

return 0;
}



