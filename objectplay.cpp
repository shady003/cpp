#include <iostream>
using namespace std;
class base {
    private :
            int a , b;
            public:
            base(int a,int b){

                this->a = a;
                this->b = b;
            }
        };
    class derived {

        public:
        derived(int x){
            cout<<x;
        }
    };
    int main(){
                        derived *p ;
                        // p = new base(1,2); A child pointer cannot hold parent entity . tho this assingment line is incorrect...





        return 0; 
    }