#include <iostream>
using namespace std;
template <class T>
T sum(T x , T y){

    return x + y;
}
int main(){
                    float a = 50.6f , b = 2.36f;
                
                        float c = sum(a,b);
                        cout<<c<<endl;
                    int a1 = 5 , b1 = 7 ;
                        int c1 = sum(a1,b1);
                        cout<<c1;




    return 0;
}