#include<iostream>
using namespace std;
int counting (int n){
     cout<<n<<" ";
     if (n==1)
     {
         return 1;
     }
     
     return counting(n-1);
}
int main(){
int n;
cin>>n;
counting(n);
    return 0;
}
