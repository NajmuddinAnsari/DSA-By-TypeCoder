#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,2,2,3,3};
    int lastduplicate=0;
    int j;
    for (int i = 0; i < n; i++)
    {   
        if (arr[i]==arr[i+1] )
        {
            j=i;
            while (arr[j]==arr[j+1])
            {
                j++;
            }
            cout<<arr[i]<<" repeating "<<j-i<<endl;

        }
        i=j-1;
        
        
        
    }
    
    return 0;
}