#include <iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={1,2,7,9,10,11};
    int k=10;
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if ((arr[i]+arr[j])>k)
        {
            j--;
        }
        else if((arr[i]+arr[j])<k){
            i++;
        }
        
    }
    

    
    return 0;
}