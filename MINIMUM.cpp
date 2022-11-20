#include <iostream>
 #include <math>

using namespace std;

int main(){       int A[9] = {2,3,4,5,6,7,8,9,0};
                
      int max=INT_MIN;
      cout<<max;
                    
    for (auto x:A){
        if (x>max){

            x = max ;
        }
    }
    cout<<max;








    return 0;
}