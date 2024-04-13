#include <iostream>
using namespace std; 

class A{
    public:
    int phy;
};
class B{
    public:
    int chem;
};
class c: private A, public B
{
   public:
int maths;
};
int main() { 
    c obj;
    cout<<obj.phy<<endl;
    cout<<obj.chem<<endl;
    cout<<obj.maths<<endl;
    return 0;
}
 
