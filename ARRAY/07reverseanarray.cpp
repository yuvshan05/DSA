#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    // print(arr,n);
}
int main()
{
    int arr[1000];
    cout<<"enter the size of the array"<<endl;
    int n;
    cin >> n;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
  return 0;
}