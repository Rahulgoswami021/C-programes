#include<bits/stdc++.h>
using namespace std;
int exp(int x, int y){
    if(y==0)
    return 1;
    // odd
    int answer = exp(x,y/2);
    if(y%2 !=0){
        return x*answer*answer;
    }else{
        return answer*answer;
    }

}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<exp(x,y);
    return 0;
}