// Create a procedure int random_walk(); that simulates a random walk on
// the integers. That is, random_walk() returns the position of a particle whose
// initial position is 0. Each time random_walk() is called, the particle moves
// one step left or right, each with probability 50%. The return value is the new
// position of the particle.
// For example, calling random_walk 20 times might produce the following
// values.
#include<bits/stdc++.h>
using namespace std;
void seed(){
  srand(time(0));
}
 double uniform(){
     
 return rand()/ double(RAND_MAX);
   }



int random_walk(){
     
    static int  position = 0;
    
    
    if (uniform() >0.5)
    {
        position++;
    }else{
        position--;
    }
    return position;
}
int main(){
   seed();
    for (int i = 0; i < 20; i++)
    {
        cout<<random_walk()<<" ";
    }
    
}