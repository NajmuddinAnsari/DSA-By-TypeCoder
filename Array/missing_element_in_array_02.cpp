#include <iostream>
using namespace std;
int main()
{
    int n=9;
    int arr[n]={1,2,3,4,5,7,8,9,10};
    int sum=0;
    for (int i = 0; i < 8; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    int s=(n*(n+1))/2;//sum of first 9 natural number 
    //this is only  applicable when it start with 1
    cout<<s<<endl;
    int missing_element=s-sum;
    cout<<"missing element is "<<missing_element<<endl;
    return 0;

}