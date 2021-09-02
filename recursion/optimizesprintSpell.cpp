#include<bits/stdc++.h>
using namespace std;
void optisprintspell(int n, string str[]){
if(n==0)
return ;
optisprintspell(n/10,str);
cout<<str[n%10]<<" ";
}
int main(){
    int n;
    cin>>n;
    string str[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    optisprintspell(n,str);
    return 0;
}
