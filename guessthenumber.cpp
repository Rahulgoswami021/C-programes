#include<iostream>
#include<ctime>
using namespace std;
void seed(){
  srand(time(0));
}
int main(){
    
    seed();
    long n = rand()%100;
    long s;
    cout<<"guess the number between 0 and 99"<<endl;
    int i = 0;
    while (1)
    {
        
        cin>>s;
        if(n > s){
            cout<<"too small"<<endl;
            i++;
        }else if(n<s){
            cout<<"too heigh"<<endl;
            i++;
        }else{
               i++;
               cout<<"matched in "<< i <<" th attempt"<<endl;
               break;
        }
    }
    
    return 0;
}