#include <iostream>
using namespace std;
class base {

        public:
        void display(){
            cout<<"function of base ";
        }

};
class derived : public  base {
public:
            void display(){
                cout<<"function of derived ";
            }
};

int main(){
                base b1 ;
                b1.display();
                derived b2;
                b2.display();





    return 0;
}