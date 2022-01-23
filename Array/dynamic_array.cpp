#include<iostream>
using namespace std;
int main(){
    cout<<"najmuddin ansari"<<endl;
    int arr[5];
    int *p;
    p=new int[5];
    /*p is not a array its only a pointer we can 
    access all of element by accessing each of the element 
    it well take memory inside heap*/
    p[0]=0;
    p[1]=1;
    p[2]=2;
    p[3]=3;
    p[4]=4;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    
    return 0;
}