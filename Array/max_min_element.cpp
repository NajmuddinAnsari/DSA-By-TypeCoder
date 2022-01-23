#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int maxf,minf;
    maxf=INT8_MIN;
    minf=INT8_MAX;
    for(int i=0;i<n;i++){
        if (arr[i]>maxf){
            maxf=arr[i];
        }
        if(arr[i<minf]){
            minf=arr[i];
        }
    }
    cout<<endl<<"max"<<maxf<<"min"<<" "<<minf;
}