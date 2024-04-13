#include<iostream>
#include<vector>
 using namespace std;
int totalocurrence(vector<int>arr, int target){
    int ress=0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i]==target){
            ress++;
        }
    }
    return ress;

}


 int main (){
    vector<int>arr{1,5,7,7,7,7,44,6,3,34,46};
    int target=7;
    
    cout<<totalocurrence(arr,target)<<" ";
    return 0;
 }