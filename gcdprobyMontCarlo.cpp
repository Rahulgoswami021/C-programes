#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

long gcd(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}



 long uniform(long n){
 return rand()%(n+1);
   }


void seed(){
  srand(time(0));
}
int main(){
    long n ,rep,a,b,count = 0;
    cout<<"Enter the Number of element in the set"<<endl;
    cin>>n;
    cout<<"Enter the number pair of sample"<<endl;
    cin>>rep;
    
        
    for (long i = 0; i < rep; i++)
    {  
        a = uniform(n);
        b = uniform(n);
       
        if (gcd(a,b)==1)
        {
            
            ++count;
        }
        
    }
    cout<< count/double(rep);
    return 0;
}