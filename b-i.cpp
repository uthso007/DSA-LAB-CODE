#include <bits/stdc++.h>
using namespace std;
void printmat(int arr[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(6) << "(" << i + 1 << ")";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "(" << i + 1 << ")" << setw(2);
        for (int j = 0; j < n; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int a[20][20];
    int n;
    cout << "Enter the value of the vertixs" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j != i)
            {
                cout << "if vertix " << i + 1 << " is connected to vertix " << j + 1 << " enter 1 otherwise 0 " << endl;
                cin >> a[i][j];
                a[j][i] = a[i][j];
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    printmat(a, n);
    return 0;
}