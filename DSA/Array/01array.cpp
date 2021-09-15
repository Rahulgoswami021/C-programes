#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int countZero = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0) countZero++;
    }
    cout<<"no. of zero is "<<countZero<<endl;
    
   for (int i = 0; i < n; i++)
   {
       if(i<countZero){
           arr[i]=0;
       }else{
           arr[i] = 1;
       }
   }
   
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   
    return 0;
}