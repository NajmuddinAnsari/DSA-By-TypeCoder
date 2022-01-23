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

    bool is_sorted()
    {
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                return false;
            }
           
            
        }
        return true;
        
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
    arr.display();
    cout<<endl;
    cout<<arr.is_sorted()<<endl;
  
    return 0;
}