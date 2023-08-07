#include<iostream>
using namespace std;
void printarray(int array[], int n)
{
    for(int i = 0; i < n; i++){
        cout<< array[i] << endl;
    }
}
int main()
{
    int array[10]={34,53,533,54};
    printarray(array,2);
  return 0;
}