#include<iostream>
using namespace std;
long fib(long n){

    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    long n;
    cout<<"enter no. of steps";
    cin>>n;
    cout<<fib(n);

}