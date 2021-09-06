#include <iostream>
using namespace std;
class stack
{
private:
    int top = -1;
    int arry[5];

public:
    stack()
    {
        for (int i = 0; i < 5; i++)
        {
            arry[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top < 0)
        {
            cout << "Stack is empty"<<endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty"<<endl;
            return false;
        }
    }
    bool isFull()
    {
        if (top == 4)
        {
            cout << "stack is full"<<endl;
            return true;
        }
        else
        {
            cout << "stack is not full"<<endl;
            return false;
        }
    }
    void push(int num)
    {
        if (top < 5)
        {
            top++;
            arry[top] = num;
        }
        else
        {
            cout << "stack is overflow"<<endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            arry[top] = 0;
            top--;
        }
        else
        {
            cout << "stack is underFlow"<<endl;
        }
    }
    int peek(int ith)
    {
       if(top<0){
           cout<<"No elemnt found"<<endl;
           return 0;
       }else{
           cout<<arry[ith]<<endl;
           return 1;
       }
    }
    int count()
    {
        if (top >= 0)
        {
            return (top + 1);
        }
        else
        {
            return -1;
        }
    }
    void change(int numCh, int pos)
    {
        if (pos < top)
        {
            arry[pos] = numCh;
        }
    }
    void display()
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << arry[i] << "\t";
        }
        cout<<endl;
    }
};
int main()
{
   int n;
   stack s1;
   
   do
   {
       cout<<"press 1 to Display"<<endl;
       cout<<"press 2 to pop"<<endl;
       cout<<"press 3 to push"<<endl;
       cout<<"press 4 to cheack to empty"<<endl;
       cout<<"press 5 to how many element entered"<<endl;
       cout<<"press 6 to cheack is it full or not"<<endl;
       cout<<"press 7 to  change "<<endl;
       cout<<"press 8 to peek an elemnt"<<endl;
       cout<<"press 9 to clear display"<<endl;
       cout<<"press 0 to exit"<<endl<<endl<<endl;
cout<<"Choose a function cheack it"<<endl;
cin>>n;


       switch (n)
       {
       case 1: s1.display();
           break;
       case 2: s1.pop();
           break;
       case 3: cout<<"enter an element to push";
                 int push;
                 cin>>push;
                 s1.push(push);
           break;
       case 4: s1.isEmpty();
           break;
       case 5: cout<<s1.count()<<endl;
           break;
       case 6: s1.isFull();
           break;
       case 7: int pos,value;
              cout<<"enter postion and value";
              cin>>pos>>value;
              s1.change(value,pos);
           break;
       case 8: int peekNo;
                 cout<<"no. of element you want to see";
                 cin>>peekNo;
                 s1.peek(peekNo+1);
           break;
       case 9: system("cls");
           break;
       case 0: break;
           break;
       
       default:
           break;
       }
   } while (n!=0);
   
}
