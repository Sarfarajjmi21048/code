#include<iostream>
#include<vector>
 using namespace std;
 int linearsearch(vector<int>arr, int key){
    for (int i=0; i<arr.size(); i++){
        if (arr[i]==key){
            cout<<"found"<<i<<endl;
        }
    }
 }
 int main (){
    vector<int> arr{10,2,4,0,5,80,70};
    int key=5;
    int find =linearsearch(arr,key);
    cout<<find<<endl;

 }