#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int length;
    int *arr;

public:
    Array(int l, int n)
    {
        size = l;
        length = n;
        arr = new int[size];
    }
    void make_array()
    {
        cout << "enter the elements " << endl;
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    }
    int insert(int element)
    {
        int i=length-1;
        while (arr[i]>element)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=element;
        return element;
        
    }
    ~Array(){
        delete []arr;
    }
};
int main()
{
    cout << "enter the length of the array :";
    int length;
    cin >> length;
    cout << "enter the numbers of elements tha you want to add :";
    int n;
    cin >> n;
    Array arr(length, n);
    arr.make_array();
    cout<<"enter the element that you want to insert :";
    int element;
    cin>>element;
    cout<<arr.insert(element)<<" is inserted "<<endl;
    arr.display();
    return 0;
}