#include<iostream> 
#include<limits.h>
using namespace std;
 int main (){
  int arr[]={11,45,32,1,56,89,1};
  int size=7;
  int maxi=INT_MIN;
  for (int i=0; i<size; i++){
    if (arr [i]>maxi){
      maxi=arr[i];
    }
  }
  cout<<maxi<<endl;
  return 0;
 }