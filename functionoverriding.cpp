#include <iostream>
using namespace std;
class parent {

public:
    virtual void Display(){
        cout<<"i'm parent"<<endl;
    }
};
class child : public parent{

            public :
             void Display(){
        cout<<"i'm child"<<endl;
    }



};
int main(){
                parent *p;
                p= new child;
                p->Display();
                p->parent::Display();
                parent *q = new parent;
                q->Display();
                


system("pause>0");



    return 0;
}

