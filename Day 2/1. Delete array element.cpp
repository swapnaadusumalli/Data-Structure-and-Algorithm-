#include <iostream>
using namespace std;

void solve(int *arr, int &n, int p)
{
    if (p > n)
        return;
    for (int i = p - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    --n;
}

int main()
{
    int n, p;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position of array element to be deleted: ";
    cin >> p;
    solve(arr, n, p);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
