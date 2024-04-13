#include<iostream>
#include<vector>
 using namespace std;
 int missingnumber(vector<int>arr,int target){
       int ans;
       for (int i=0; i<arr.size(); i++){
        if (arr[i]!=target){
            ans=target;
        }
       }
       return ans;
 }
int main (){
    vector<int>arr{1,2,3,4,5,6,8,9};
    int target=7;
    cout<<missingnumber(arr,target);
    return 0;
}