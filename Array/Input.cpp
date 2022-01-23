#include<iostream>
using namespace std;
int main(){
    // cout<<"najmuddin ansari";
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for (int i=1;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i];
    }
    // cout<<arr[0];
    return 0;

}