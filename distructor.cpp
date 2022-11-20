#include <iostream>
using namespace std;
class Demo {
        int *p ;
        public :
        Demo(){

            p = new int[10];
            cout<<"constructor is called \n";
        }
        ~Demo(){
            delete []p;
            cout<<"Distructor is called \n";
        }
};
int main(){
    Demo p1;
    Demo *p = new Demo ;
    delete p;
system ("pause>0");
return 0;
}