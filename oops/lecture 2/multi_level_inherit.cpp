#include <iostream>
using namespace std; 

class fruit{
public:
    
    string name;
    int weight;
     int sugarlevel;
    

};
    class mango: public fruit {
        public:
       
    };
    class alphanso: public mango {
         public: 
        
       
    };

int main() { 
    alphanso a;
    a.name="sarfara";
    cout<<a.name<<endl;
    cout<<a.weight<<endl;
    cout<<a.sugarlevel<<endl;

   
    return 0;
}
 
