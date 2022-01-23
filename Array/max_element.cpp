#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int max=arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<max<<endl;
    int key=3;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]==key)
        {
            cout<<i<<endl;
        }
        
    }
    int low=0;
    int high=6;
    int mid=(low+high)/2;
    cout<<mid<<"the mid"<<endl;
    for (int i = 0; i < 6; i++)
    {
        mid=(low+high)/2;
        if (arr[mid]==key)
        {
            cout<<"element found at "<<mid<<endl;
            break;
        }
        else if (arr[mid]>key)
        {
            high=mid;
        }
        else{
            low=mid;
        }
       
    }
    int num=1;
    cout<<"the array is "<<endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j=1; j<=4; j++)
        {
            cout<<num;
            num=num+1;
        }

        cout<<endl;
        
    }
    int count=3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout<<"*";
        }
        count=count-1;
        cout<<endl;
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            if (i>j)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            if ((i+j)>3)
            {
                cout<<" *";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    } 
    
    
    
    return 0;
}