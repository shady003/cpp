#include <iostream>
using namespace std;
static int count = 0 ;
class over{
            int a , b ;
            public :
            over(){
                a=0;
                b=0;
            }
            over (int a , int b = 0){
                this->a = a;
                this->b = b;
            }
        void display(){ count ++;
            cout<<"Details of "<<count <<" class : "<<endl<<"Value of a is "<<a<<endl<<"Value of b is "<<b<<endl;
        
        }
        virtual void show ();
};
class over2 : public over {
        public : 
        void show (){
            cout<<"Inharited class \n";
        }
};
int main(){
            over* o[2];
            o[0] = new over;
            o[1] = new over(4,5);
            o[0]->display();
            // cout<<"Details of second class \n";
            o[1]->display();
            over* ptr;
            ptr= new over2; 
            ptr->show();
    return 0;
}