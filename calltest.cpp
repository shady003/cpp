#include <iostream>
using namespace std;
class base {
                int t1 , t2 ;
    public :
            void set(int x, int y){
                    t1 = x;
                    t2 = y;
            }
        void show(){cout<<t1<<t2;}
        base (int x = 0 , int y = 0){
           t1 = x;
           t2 = y;
        }
};
class drived : base {
                int z1;
    public:
        drived(int x = 0 , int y = 0 , int t = 0){
            set(x,y);
            z1 = t;
                
        }
        void show2(){
            show();
            cout<<z1;
        }
};
int main(){
                drived d1(2,3,4);
                d1.show2();





    return 0;
}