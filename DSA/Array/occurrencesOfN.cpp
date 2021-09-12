#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,3,5,3,4,5,3};
    int m =sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter no where you want to find occurrences"<<endl;
    cin>>n;
    int flag =0;
    for (int i = 0; i < m; i++)
    {
        if (n==arr[i])
        {
            ++flag;
        }
        
    }
    cout<<"Occurrences of "<<n<<" is : "<<flag;
}