#include<iostream>
 using namespace std;
   int areaofrect(int a, int b){
    int result ;
    result =a*b;
    return result ;
   }
   int main (){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int Area=areaofrect(a, b);
    cout<<"area of rectangle: "<<Area<<endl;
    return 0;
   } 