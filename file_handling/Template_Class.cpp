#include <iostream>
using namespace std;
template <class t>
class Calculation{
        t first ;
        t second ;
    public:
            Calculation(t a , t b){
                first = a ;
                second = b;
            }
            
            t add(){
                return first + second;
            }
            t subtract(){
                if (first > second)
                return first - second;
                else 
                return second - first ; 
            }
};
int main(){
                class Calculation<int> *c1 = new  Calculation<int>(4,5);
                cout<<"Addition: "<<c1->add()<<endl;
                cout<<"Subtraction: "<<c1->subtract();
    return 0;
}