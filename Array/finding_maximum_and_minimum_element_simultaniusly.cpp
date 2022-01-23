#include <iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={1,2,7,12,10,11};
    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        else if (arr[i]>max)
        {
            max=arr[i];
        }
        
        
    }
    cout<<"max ="<<max<<endl<<"min = "<<min<<endl;
    
    

    
    return 0;
}