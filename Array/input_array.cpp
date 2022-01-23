#include<iostream>
using namespace std;
int main(){
    // cout<<"nakdfjkd";
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    // cout<<arr[2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        // cout<<endl;
    }
    // cout<<endl<<arr[2]<<endl;
    int key;
    key=2;
    for (int i=0;i<=n;i++){
        if(arr[i]==key){
            key=i;
        }
    }
    cout<<endl<<key;
    return 0;
}