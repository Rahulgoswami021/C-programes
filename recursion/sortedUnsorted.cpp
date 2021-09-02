#include <bits/stdc++.h>
using namespace std;
bool sortUnsort(vector<int> a, int index)
{
    if (index >= a.size())
    {
        return true;
    }
    if (a[index] < a[index - 1])
    {
        return false;
    }
    return sortUnsort(a, index + 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    cout << "enter arry values";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sortUnsort(a, 1);
}