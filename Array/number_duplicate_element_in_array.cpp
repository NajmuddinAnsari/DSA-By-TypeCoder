#include <iostream> 
using namespace std;
int main(){
    cout<<"enter the length of the array :";
    int length ;
    cin>>length;
    int lastduplicate=0;
    int arr[length];
    cout<<"enter the elements "<<endl;
    for (int j=0;j<length; j++)
    {
        cin>>arr[j];
    }
    int j;
    for (int i = 0; i < length-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            j=i+1;
            while (arr[j]==arr[i])
            {
                j++;
            }
            cout<<"duplicate "<<arr[i]<<" "<<j-i<<" times"<<endl;
        }
        i=j-1;
        
    }
    
    return 0;
}