#include <iostream>
using namespace std ;
int test (int n ){
    static int a ;
    if (n != 0 ){
        a++;
        // cout << a ;
        cout<<n;
        return n * (n-1);
    }
    
}
int main (){
//    static int a ;
            // for (int i = 0 ; i < 5 ; i++)
            // {
            //   static int  a ;
            //     a++;
            // }
    // cout<<a;
    int a  = test(5);
    cout << a ;
    
    return 0;


}