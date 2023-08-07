#include<iostream>
using namespace std;

int sumarray(int arr[] , int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum=sum + arr[i];
    }
    return sum;
}

int main()
{
    int n,arr[1000];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the size of the array "<<sumarray(arr,n)<<endl;
  return 0;
}