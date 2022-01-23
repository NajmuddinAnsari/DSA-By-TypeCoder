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
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << p[i] << " ";
        }
    }
    int del(int element)
    {
        for (int i = 0; i < length; i++)
        {
            if (p[i]==element)
            {
                for (int j = i; j < length-1; j++)
                {
                    p[j]=p[j+1];
                }
                length--;
                return p[i];
                
            }
            
        }
        
        
    }
    void display_s_l()
    {
        cout<<"size = "<<size<<endl<<"length = "<<length<<endl;
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
    cout<<"enter the element that you want to delete :";
    int element;
    cin>>element;
    int deleted_elment=arr.del(element);
    cout<<deleted_elment<<" has deleted"<<endl;
    cout<<"now the array is "<<endl;
    arr.display();
    arr.display_s_l();
}