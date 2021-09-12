#include<iostream>
using namespace std;
int main(){
    int arr[9];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];

    }
    cout<<"Elements of array is"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}