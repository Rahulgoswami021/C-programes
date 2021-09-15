#include<iostream>
using namespace std;
void unionPrint(int a[],int b[],int n ,int m){
       int i=0,j=0;
       while (i<n && j<m)
       {
           if(a[i]<b[j]){
               cout<<a[i++]<<" ";
           }else if(a[i]>b[j]){
               cout<<b[j++]<<" ";
           }else{
               cout<<a[i++]<<" ";
               j++;
           }
       }
       while (i<n){
           cout<<a[i++]<<" ";
       }
      while (j<m)
      {
          cout<<b[j++]<<" ";
      }
      
       
}
void IntersectionPrint(int a[],int b[],int n ,int m){
       int i=0,j=0;
       while (i<n && j<m)
       {
           if(a[i]<b[j]){
               i++;
           }else if(a[i]>b[j]){
               j++;
           }else{
               cout<<a[i++]<<" ";
               j++;
           }
       }
      
      
       
}
int main(){
    int a[]={1,2,4,5,7,8};
    int b[]={0,2,3,5,9};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
    unionPrint(a,b,n,m);
    cout<<endl;
    IntersectionPrint(a,b,n,m);
}