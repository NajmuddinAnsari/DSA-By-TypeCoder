#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={6,7,9,10,12};
    int differ=arr[0]-0;
    for (int i = 0; i < n; i++)
    {   
        if (arr[i]-i!=differ)
        {
            cout<<differ+i<<endl;
            differ=arr[i]-i;
        }
        
        
    }
    
    return 0;
}