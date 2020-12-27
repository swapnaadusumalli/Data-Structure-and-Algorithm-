#include <iostream>
using namespace std;

void solve(int *arr, int n, int k)
{
    while (k--)
    {
        int i, t = arr[0];
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[i] = t;
    }
}

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of left rotations: ";
    cin >> k;
    solve(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
