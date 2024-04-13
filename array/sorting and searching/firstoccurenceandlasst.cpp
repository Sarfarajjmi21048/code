#include<iostream>
#include<vector>
 using namespace std;
int binary(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;
    //first ocurrence 
  for (int i=0; i<n; i++){
    if (arr[mid]==target){
         ans=mid;
         e=mid-1;

    }
    else if (arr[mid]<target){
        s=mid+1;
    }
    else {
        e=mid-1;
    }
mid=(s+e)/2;
  }
  return ans;
}

 int main (){
    int arr[]={4,5,5,5,9,45,12};
    int target=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    int find =binary(arr,n,target);
    cout<<find<<" ";
    
 }