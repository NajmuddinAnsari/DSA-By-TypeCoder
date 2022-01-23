#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    int arr[n] = {1, 2, 3, 4};
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    int j;
    int i = n - 1;
    int temp;
    for (j = 0; j <= mid; j++)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
