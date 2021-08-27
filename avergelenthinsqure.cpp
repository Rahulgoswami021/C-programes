/*Averge length of two points  in a square [0, 1] by monte carlo approch*/
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<time.h>
using namespace std;
 double uniform(){
 return rand()/double(RAND_MAX);
   }
double uniform(double a , double b){
    return (b -a)*uniform()+a;
}

void seed(){
  srand(time(0));
}
int main(){
      long a=0,b=1;
      double x1,y1,x2,y2; 
      long rep;
      double sum = 0;
      cout<<"enter no. of steps"<<endl;
      cin>>rep;
     seed();
      for (long i = 0; i < rep; i++)
      {
      x1 = uniform(a,b);
      y1 = uniform(a,b);
      x2 = uniform(a,b);
      y2 = uniform(a,b);

          sum += sqrt(pow(x1-x2,2)+pow(y1-y2,2));
      }
      cout<<"avrege length is :"<<sum/double(rep);
      
    return 0;
}