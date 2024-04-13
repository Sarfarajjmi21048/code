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
        // Dog class inherits from Animal
    };

int main() {
    dog d1;
    d1.age=12;
    cout<<d1.age<<endl;
    d1.eat();
    return 0;
}
 
