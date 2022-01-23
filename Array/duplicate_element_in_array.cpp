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
    cout<<"the duplicates are "<<endl;
    for (int i = 0; i < length; i++)
    {
        if (arr[i]==arr[i+1] &&arr[i]!=lastduplicate)
        {
            cout<<arr[i]<<endl;
            lastduplicate=arr[i];
        }
        
    }
    
    
    return 0;
    
}