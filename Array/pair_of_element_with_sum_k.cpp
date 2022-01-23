#include <iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={2,4,6,7,3,8};
    int k=10;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            }
            
        }
        
    }
    
    return 0;
}