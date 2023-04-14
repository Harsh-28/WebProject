#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
void printArray(int arr[] , int n,int size){
    if(n == size)
        return;
    cout << arr[n] << " ";
    printArray(arr,++n,size);
}

void printRev(int *arr, int n , int size){
    if(n == size)
        return;
    printRev(arr,n+1,size);
    cout << arr[n] << " ";
}
void printRev2(int *arr, int n){
    if(n < 0)
        return;
    cout << arr[n] << " ";
    printRev2(arr,n-1);
}

void printArray2(int arr[], int size){
    if(size == 0)
        return;
    cout << arr[0] << " ";
    printArray2(arr+1, size-1);
}

int getMax(int arr[], int size,int indx){
    if(indx == size)
        return INT_MIN;
    
    int ans = arr[indx];
    int reans = getMax(arr,size,indx+1);
    return max(ans,reans);

}

void getMax(int arr[], int size, int indx, int &maxi){
    if(indx == size)
        return;
    
    maxi = max(maxi, arr[indx]);
    getMax(arr, size, indx+1, maxi);
}

int findLast(int arr[], int indx, int target){
    if(indx < 0)
        return -1;
    
    if(arr[indx] == target)
        return indx;
    
    else{
        return findLast(arr,indx-1, target);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size;
    cin>> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    // printArray(arr,0,size);
    // cout << endl;
    // printRev(arr,0,size);
    // cout << endl;
    // printRev2(arr,size-1);
    // cout << endl;
    // printArray2(arr,size);
    // getMax(arr,size, 0, maxi);

    // cout << maxi;


    cout << findLast(arr,size,4);
return 0;
}

//