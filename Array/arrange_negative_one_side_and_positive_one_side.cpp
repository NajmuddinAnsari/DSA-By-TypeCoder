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
    /*void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }*/
    void arrange()
    {
        int i=0;
        int j=length-1;
        while (i<j)
        {
            while (arr[i]<0)
            {
                i++;
            }
            while (arr[j]>=0)
            {
                j--;
            }
            if (i<j)
            {
                swap(arr[i],arr[j]);
            }
            
        }
        for (int i = 0; i < length; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
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
    arr.display();
    cout<<endl;
    arr.arrange();


    return 0;
}