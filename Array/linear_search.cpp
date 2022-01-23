#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int length;
    int *p;

public:
    Array(int l, int n)
    {
        size = l;
        length = n;
        p = new int[size];
    }
    void make_array()
    {
        cout << "enter the elements " << endl;
        for (int i = 0; i < length; i++)
        {
            cin >> p[i];
        }
    }
    int search(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (p[i]==key)
            {
                return i;
            }
            
        }
        return -1;
        
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << p[i] << " ";
        }
    }
};
int main()
{
    cout << "enter the size of the array :";
    int size;
    cin >> size;
    cout << "enter the numbers of elements tha you want to add :";
    int n;
    cin >> n;
    Array arr(size, n);
    arr.make_array();
    arr.display();
    cout<<endl;
    cout<<"enter the elment that you want to search :";
    int key;
    cin>>key;
    int index=arr.search(key);
    if (index>0)
    {
        cout<<"element found seccessfully at index "<<index<<endl;
    }
    else{
         cout<<"element not found "<<endl;
    }
    
    return 0;
}