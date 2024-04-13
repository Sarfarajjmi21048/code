#include <iostream>
using namespace std; 

class Animal{
public:
    int age ;
    
    void eat(){
        cout << "I am eating" << endl;   
    }
    void sleep(){
        cout << "I am sleeping" << endl;
    }

};
    class dog: public Animal {
         public: void print(){
       cout<<this->age;
         }
    };

int main() { 
    dog d1;
    d1.age=12;
    cout<<d1.age<<endl;
    d1.eat();
    d1.print();
    return 0;
}
 
