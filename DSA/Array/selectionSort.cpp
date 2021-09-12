#include <iostream>
using namespace std;
int main()
{
    int a[] = {56,-1, 0, 3, 57, 89, 9};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        int temp = a[min_index];
          a[min_index] = a[i];
          a[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}