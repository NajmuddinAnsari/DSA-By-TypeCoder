#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int *arr;

public:
    Array(int l)
    {
        size = l;
        arr = new int[size];
    }
    void make_array()
    {
        cout << "enter the elements " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    int binary_search(int l, int h, int key)
    {
        int mid;
        if (l <= h)
        {

            mid = (l + h) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                return binary_search(l, mid - 1, key);
            }
            else
            {
                return binary_search(mid + 1, h, key);
            }
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    cout << "enter the size of the array :";
    int size;
    cin >> size;
    Array arr(size);
    arr.make_array();
    int low = 0;
    int high = size - 1;
    cout << "enter the elment that you want to search :";
    int key;
    cin >> key;
    int index = arr.binary_search(low, high, key);
    if (index > 0)
    {
        cout << "element found seccessfully at index " << index << endl;
    }
    else
    {
        cout << "element not found " << endl;

        return 0;
    }
}