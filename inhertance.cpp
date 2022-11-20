#include <iostream>
using namespace std;
class calculation{
    public:
    virtual int operation(int a , int b)=0;
};
class sum : public calculation {
    public: 
    int operation(int a , int b){

        return a+b;
    }
};
int main(){
               sum c;
                // c = new sum ;
                cout<<c.operation(4,5);
    return 0;
    
}