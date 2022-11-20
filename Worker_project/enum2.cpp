#include <iostream>
using namespace std;
enum color {red , blue, yellow , green};
int main(){

            int a ;
            cin>>a;
        if (a<3){
            switch (a){
                case red :
                cout<<"Color Red";
                break;
                case blue :
                cout<<"Color blue";
                break;
                case yellow :
                cout<<"Color yellow";
                break;
                case green :
                cout<<"Color green";
                break;
            }
        }
        else 
        cout<<"Wrong_input";



    return 0;
}