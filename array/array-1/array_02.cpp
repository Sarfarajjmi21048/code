#include<iostream>
using namespace std;
  void printarray(int arr[],int size ){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  void inc(int arr[], int size){
    arr[0]=arr[0]+10;
    //printarray(arr,size);
  }
  int main (){
    int arr[]={25,45};
    int size=2;
    inc(arr,size);
    printarray(arr,size);
    return 0;
  }
