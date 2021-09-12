#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
   int b[n],j=n-1;
  for (int i = 0; i < n; i++)
  {
      b[j] = arr[i];
      j--;
  }
  for (int i = 0; i < n; i++)
  {
      cout<<b[i]<<" ";
  }
  
   
    
}