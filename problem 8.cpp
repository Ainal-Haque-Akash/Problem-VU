//write a C++ program that calculates the sum of all elements in a given array of intgers.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of element of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    cout<<"the sum of all the array elements is: "<<sum;
    return 0;
}
