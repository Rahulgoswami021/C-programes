#include<bits/stdc++.h>
using namespace std;
int exponent(int x,int y){
    if(y==0){
        return 1;
    }
    return x*exponent(x,y-1);
}
 int main(){
     int x,y;
     cin>>x>>y;
     cout<<exponent(x,y);

 }