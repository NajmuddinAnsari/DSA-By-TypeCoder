#include <iostream> 
using namespace std;
class Array
{
    private:
    int length;
    int number_of_elements;
    int *p;
    public:
    Array(int l,int n)
    {
        length=l;
        number_of_elements=n;
        p=new int[length];
    }
    void make_array()
    {
        cout<<"enter the elements "<<endl;
        for (int i = 0; i < number_of_elements; i++)
        {
            cin>>p[i];
        }
        
    }
    void display()
    {
        for (int i = 0; i < number_of_elements; i++)
        {
            cout<<p[i]<<" ";
        }
        
    }
    void append(int element)
    {
        p[number_of_elements]=element;
        number_of_elements++;
    }


};

int main() 
{

    cout<<"enter the length of the array :";
    int length;
    cin>>length;
    cout<<"enter the numbers of elements tha you want to add :";
    int n;
    cin>>n;
    Array arr(length,n);
    arr.make_array();
    arr.display();
    cout<<endl;
    arr.append(10);
    arr.display();
    arr.append(11);
    cout<<endl;
    arr.display();
    return 0;
}