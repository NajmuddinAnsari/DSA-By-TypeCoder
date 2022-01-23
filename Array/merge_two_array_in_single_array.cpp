#include <iostream> 
using namespace std;
void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    cout<<"enter the size of the first array :";
    int arr_size1;
    cin>>arr_size1;
    int arr1[arr_size1];
    cout<<"enter the elements of the first array :"<<endl;
    for (int i = 0; i < arr_size1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the size of the second array :";
    int arr_size2;
    cin>>arr_size2;
    int arr2[arr_size2];
    cout<<"enter the elements of the second array :"<<endl;
    for (int i = 0; i < arr_size2; i++)
    {
        cin>>arr2[i];
    }
    int arr_size3=arr_size1+arr_size2;
    int arr3[arr_size3];
    int i,j,k;
    i=j=k=0;
    while (i<arr_size1 && j<arr_size2)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        
    }
    for (; i < arr_size1; i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for (; j < arr_size2; j++)
    {
        arr3[k]=arr2[j];
        k++;
    }
    display(arr3,arr_size3);

    return 0;
}