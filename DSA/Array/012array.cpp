#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,1,1,0,0,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int countZero = 0,countOne =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0) countZero++;
        if(arr[i]==0) countOne++;
    }
    cout<<"no. of zero is "<<countZero<<endl;
    
   for (int i = 0; i < n; i++)
   {
       if(i<countZero){
           arr[i]=0;
       }else if(i<(countOne+countZero)){
           arr[i] = 1;
       }else{
           arr[i]=2;
       }
   }
   
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   
    return 0;
}