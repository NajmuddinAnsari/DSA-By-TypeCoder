#include<iostream>
using namespace std;
int main(){
    int *p;
    p=new int[3];
    p[0]=0;
    p[1]=1;
    p[2]=2;
    int *q;
    q=new int[5];
    for (int i = 0; i < 3; i++)
    {
        q[i]=p[i];
    }
    q[3]=3;
    q[4]=4;
    delete []p;
    //array will be deleted which is pointing p
    p= q;
    q=NULL;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    
    

}