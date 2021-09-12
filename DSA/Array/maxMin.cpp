#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[],int n){
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minNo = min(minNo,arr[i]);
    }
    return minNo;
    
}
int getMax(int arr[],int n){
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,arr[i]);
    }
    return maxNo;
    
}

int main(){
    int arr[]={89,-67,34,1,0,-283,23,243};
     int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Minimum : "<<getMin(arr,n)<<endl;
    cout<<"Maximum : "<<getMax(arr,n)<<endl;
    return 0;
}