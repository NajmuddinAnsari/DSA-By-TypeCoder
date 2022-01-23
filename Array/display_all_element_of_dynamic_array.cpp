#include <iostream>
using namespace std;

int main(){
    cout<<"enter the length of the array :";
    int length;
    cin>>length;
    int *p=new int[length];
    cout<<"enter the no of elements :";
    int n;
    cin>>n;
    cout<<"enter the elements "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    p[n]=10;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    

    return 0;
}