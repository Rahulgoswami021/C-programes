#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int arr[100];
    int d=2,i=0;
    while (n>1)
    {
        while(n%d==0){
           arr[i] =d;
           cout<<arr[i]<<" ";
           i++;
           n/=d;
        }
        
        d++;
    }
    

}