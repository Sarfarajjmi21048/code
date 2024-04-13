#include<iostream>
 #include<vector>
 #include<limits.h>
  using namespace std;
  int max(int arr[][3], int rows, int cols){
   int maxi=INT_MIN;
   for(int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
        if(arr[i][j]>maxi){
            maxi=arr[i][j];
        }
    }
   }
   return maxi;
  }
   int main (){
    int arr[3][3]={{1,2,3},{4,55,6},{7,8,9}};
    
    int find =max(arr,3,3);
    cout<<find<<endl;
    return 0;
   }