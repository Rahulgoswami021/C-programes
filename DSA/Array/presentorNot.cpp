#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no you want to find";
    cin>>n;
    cout<<"enter size of array"<<endl;
    cin>>m;
    int arr[m];
    bool flag =0;
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];

    }
    cout<<"Elements of array is"<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<arr[i]<<" ";
    }

for (int i = 0; i <m; i++)
{
    if (n==arr[i])
    {
        flag =1;
        break;
    }
    
}
cout<<endl;
if (flag==1)
{
    cout<<"no. is find";
}else{
    cout<<"Not found";
}
return 0;

}