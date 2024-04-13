#include<iostream>
using namespace std;
string removeduplicate(string str){
    string ans=" ";
    int i=0;
    while(i<str.length()){
        if (ans.length()>0 && ans[ans.length()-1]==str[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);

        }
        i++;

    }
    return ans;
}
int main (){
   string str="geeksforgeeks";
    // int n=sizeof(str)/sizeof(str[0]);
    cout<<removeduplicate(str)<<endl;
    return 0;
}