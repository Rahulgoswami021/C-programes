// 7 Write a pair of procedures int up() and int down() that behave as follows. When up() is called, a certain value is increased by 1 and the new value
// is returned. Similarly, when down() is invoked, the value is decreased by 1
// and that new value is returned. At the start of the program, the value is zero.
// For example, suppose we run the following code.
// cout << up() << " ";
// cout << up() << " ";
// cout << up() << " ";
// cout << down() << " ";
// cout << up() << " ";
// cout << down() << endl;
#include<bits/stdc++.h>
using namespace std;
int position(int count){
    static int pos = 0;
    pos+=count;
    return pos;
}
int up(){
    return position(1);
}

int down(){
    return position(-1);
}

int main(){
cout << up() << " ";
cout << up() << " ";
cout << up() << " ";
cout << down() << " ";
cout << up() << " ";
cout << down() << endl;
}
