#include<iostream>
#include<limits.h>
 using namespace std;
 int max(int arr[], int n){
      int maxi=INT_MIN;
      for (int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
      }
      return maxi;
 }
 int main (){
  
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int find =max(arr,n);
    cout<<find<<endl;
    return 0;
 }