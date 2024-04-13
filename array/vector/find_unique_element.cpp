#include<iostream> 
#include<vector>
using namespace std;
int findunique(vector<int>arr){
    int ans=0;
    for (int i=0; i<arr.size(); i++){
        ans =ans^arr[i];
    }
    return ans;
}
int main (){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int uniqueelement =findunique(arr);
    cout<<uniqueelement<<endl;
    return 0;
}