#include<iostream>
#include<vector>
using namespace std;
int main (){
    
vector<int>arr{1,3,5,7,9};
int a=sizeof(arr)/sizeof(arr[0]);
vector<int>brr{2,4,6,8};
int b=sizeof(brr)/sizeof(brr[0]);
vector<int>ans;
for (int i=0; i<arr.size();i++){
    ans.push_back(arr[i]);
}
for (int i=0; i<brr.size();i++){
    ans.push_back(brr[i]);
}
//union of two array
for (int i=0; i<ans.size();i++){
    cout<<ans[i]<<" ";
}

}