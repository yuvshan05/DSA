#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{ 
    int arr[]={1,2,3,4,5,6,7};
    cout<<"enter num you want to search \n";
    int key;
    cin>>key;
    bool found=search(arr,7,key);
    if(found){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
  return 0;
}