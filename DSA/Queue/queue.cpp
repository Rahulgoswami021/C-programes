#include <iostream>
using namespace std;
class queue
{
private:
    int arr[5] = {0};
    int rear = -1, front = -1;

public:
    bool isEmpty()
    {
        if (rear == front)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (rear == 4)
            return true;
        else
            return false;
    }
    void enqueue(int num)
    {
        if (isEmpty())
        {
            rear++;
            arr[rear] = num;
        }
        else if (isFull())
        {
            return;
        }
        else
        {
            rear++;
            arr[rear] = num;
        }
    }
    int dequeue()
    {
        if (isEmpty())
        {
            return 0;
        }
        else if (front < 5)
        {
            front++;
            arr[front] = 0;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int count()
    {
        if (rear >= 0)
        {
            return (rear + 1);
        }
        else
        {
            return -0;
        }
    }
};
int main()
{
    int n;
    queue s1;

    do
    {
        cout << "press 1 to Display" << endl;
        cout << "press 2 to dequeue" << endl;
        cout << "press 3 to enqueue" << endl;
        cout << "press 4 to cheack to empty" << endl;
        cout << "press 5 to how many element entered" << endl;
        cout << "press 6 to cheack is it full or not" << endl;
        cout << "press 7 to clear display" << endl;
        cout << "press 0 to exit" << endl
             << endl
             << endl;
        cout << "Choose a function cheack it" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            s1.display();
            break;
        case 2:
            s1.dequeue();
            break;
        case 3:
            cout << "enter an element to push";
            int push;
            cin >> push;
            s1.enqueue(push);
            break;
        case 4:
            s1.isEmpty();
            break;
        case 5:
            cout << s1.count() << endl;
            break;
        case 6:
            s1.isFull();
            break;

        case 7:
            system("cls");
            break;
        case 0:
            break;
            break;

        default:
            break;
        }
    } while (n != 0);
}
