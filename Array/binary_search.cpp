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
    int binary_search(int key)
    {
        int l=0;
        int h=size-1;
        int mid=(l+h)/2;
        while (l<=h)
        {
            mid=(l+h)/2;
            if (arr[mid]==key)
            {
                return mid;
            }
            
            else if (arr[mid]>key)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        }
        return -1;
        
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
    cout<<"enter the elment that you want to search :";
    int key;
    cin>>key;
    int index=arr.binary_search(key);
    if (index>0)
    {
        cout<<"element found seccessfully at index "<<index<<endl;
    }
    else{
         cout<<"element not found "<<endl;
    }
    
    return 0;
}