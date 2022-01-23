#include <iostream>
using namespace std;
int main()
{
    int n=9;
    int arr[n]={6,7,9,10,11,14,15,16};
    int difference=arr[0]-0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<arr[i+1])
        {
                while (difference<arr[i]-i)
                {
                    cout<<i+difference<<endl;
                    difference++;
                }
                
        }
        
    }
    
    return 0;
}