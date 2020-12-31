void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int t = arr[i];
        int j = i;
        while (j > 0 && t < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = t;
    }
}