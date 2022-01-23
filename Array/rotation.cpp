#include <iostream>
using namespace std;
int main()
{
    cout<<"anjmuddin ansari";
    int arr[4]={1,2,3,4};
    int temp=arr[0];
    for (int i = 0; i < 4; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[3]=temp;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}