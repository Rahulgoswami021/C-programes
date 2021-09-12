#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"enter value to find largest and smallest no.";
    cin>>k;
    int arr[]={1,2,3,4,5,9,6,33,19};
    int n = sizeof(arr)/sizeof(arr[0]);
   // sorting array
   for (int i = 0; i < n; i++)
   {   int min_index = i;
      for (int j =i+1; j < n; j++)
      {
          if (arr[j]<arr[min_index])
          {
              min_index = j;
          }
          
      }
      int temp = arr[min_index];
     arr[min_index] = arr[i];
     arr[i] =temp;
   }
   cout<<"Smallest : "<<arr[k-1]<<endl;
   cout<<"largest : "<<arr[n-(k)];
}