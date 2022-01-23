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
    cout << "enter the length of the first array :";
    int len_arr1;
    cin >> len_arr1;
    int arr1[len_arr1];
    cout << "enter the elements " << endl;
    for (int i = 0; i < len_arr1; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the length of the second array :";
    int len_arr2;
    cin >> len_arr2;
    int arr2[len_arr2];
    cout << "enter the elements " << endl;
    for (int i = 0; i < len_arr2; i++)
    {
        cin >> arr2[i];
    }
    int len_arr3 = len_arr1 + len_arr2;
    int arr3[len_arr3];
    int k=0;
    for (int i = 0; i < len_arr1; i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for (int i = 0; i < len_arr2; i++)
    {
        for (int j = 0; j < len_arr1; j++)
        {
            if (arr2[i]!=arr3[j])
            {
                arr3[k]=arr2[j];
                k++;
            }
            
        }
        
    }
    display(arr3,k);
    

    
    

    return 0;
}