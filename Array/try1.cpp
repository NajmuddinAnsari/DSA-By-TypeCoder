#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{

    int arr[5]={1,-3,2,-4,5};
    int i=0;
    int j=5;
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
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}