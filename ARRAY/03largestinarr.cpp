#include<iostream>
using namespace std;
int main()
{
    int arr[5]={23,33,4,44,1};
    int temp=arr[0];
    for(int i=0; i<5; i++)
    {
        if(temp<arr[i]){
            temp=arr[i];
        }
    };
    cout<<"the largest element is "<<temp<<endl;
  return 0;
}