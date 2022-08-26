//Name: Lokendra Kheta
//Roll_No: 2010990424
//Set_No: 3
//Question_No: 1


#include <iostream>
using namespace std;
//Swap Functions for swapping Alternate Elements
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
//Function For rerranging Array Elements
void rearrangeArray(int arr[], int n)
{
    
    for (int i = 1; i < n; i += 2)
    {
       
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
 
       
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main()
{
    //Enter Size of Array
    int n;
    cout<<"Enter Number of Elements in the Array: ";
    cin>>n;
    int arr[n];
    //Enter Array Elements 
    cout<<"Enter Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    //Function for rearrangeing Array 
    rearrangeArray(arr, n);
    
    //Output Of the Array: 
    cout<<"The Output Array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }
 
    return 0;
}