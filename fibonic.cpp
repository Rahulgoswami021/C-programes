#include<iostream>
using namespace std;
 int main(){
     int n;
     cout<<"no. of steps";
     cin>>n;
     int a =0 , b = 1;
     cout<<a<<" "<<b;
     int newno;
     for (int i = 1; i < n; i++)
     {
         newno = a+b;
         cout<<" "<<newno<<" ";
         a = b;
         b = newno;

     }
     return 0;
 }