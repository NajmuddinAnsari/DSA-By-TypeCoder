#include <iostream>
using namespace std;
class Array
{
private:
    int length;
    int number_of_elements;
    int *p;

public:
    Array(int l, int n)
    {
        length = l;
        number_of_elements = n;
        p = new int[length];
    }
    void make_array()
    {
        cout << "enter the elements " << endl;
        for (int i = 0; i < number_of_elements; i++)
        {
            cin >> p[i];
        }
    }
    void display()
    {
        for (int i = 0; i < number_of_elements; i++)
        {
            cout << p[i] << " ";
        }
    }
    void insert(int index ,int element)
    {
        for (int i = number_of_elements; i >= index; i--)
        {
            p[i+1] = p[i];
        }
        p[index] = element;
        number_of_elements++;
    }
    ~Array(){
        delete []p;
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
    arr.insert(1, 10);
    arr.display();
    return 0;
}