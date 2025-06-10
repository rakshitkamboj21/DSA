#include<iostream>
using namespace std ;
void intersection(int arr1[], int arr2[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                break; // To avoid counting duplicates in arr1
            }
        }
    }
}   

int main()
{
    int arr1[]={19,21,3,4,5};
    int arr2[]={2,3,8,9,10};
    int size=6;
    intersection(arr1,arr2,size);
    return 0;
}