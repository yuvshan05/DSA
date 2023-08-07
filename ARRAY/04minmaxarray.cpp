#include<iostream>
using namespace std;
int min(int arr[],int n)
{
    int min=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[],int n)
{
    int max=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"max is "<<max(arr,n)<<endl;
    cout<<"min is "<<min(arr,n)<<endl;
  return 0;
}