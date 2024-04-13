#include <iostream>
using namespace std; 

class Animal{
public:
    int age ;
    string name;
    
    void eat(){
        cout << "I am eating" << endl;   
    }
    void sleep(){
        cout << "I am sleeping" << endl;
    }

};
    class dog: private Animal {
         public: void print(){
       cout<<this->age;
         }
    };

int main() { 
    dog d1;
    cout<<d1.age<<endl;
    // d1.print();
    
    return 0;
}
 
