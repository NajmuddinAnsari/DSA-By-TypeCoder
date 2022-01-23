#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int *p;
    int *q;

public:
    Array(int l)
    {
        size = l;
        p = new int[size];
        q = new int[size];
    }
    void make_array()
    {
        cout << "enter the elements " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> p[i];
        }
    }
    void reverse()
    {
        int i=0,j=size-1;
        while (i<j)
        {
            swap(p[i],p[j]);
            i++;
            j--;
        }
        
        
    }
    

    void display()
    {
        for (int i = 0; i < size; i++)
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
    Array arr(size);
    arr.make_array();
    arr.display();
    cout<<endl;
    arr.reverse();
    arr.display();
    
}