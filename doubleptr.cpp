#include <iostream>
using namespace std;
int main(){

      int ** arr = new int*[5];
      for (int i = 0 ; i < 5 ; i++){
              arr[i] = new int[4] 
              ;
              }

              for (int k = 0 ; k < 5 ; k++)
                for (int j = 0 ; j < 4 ; j++)
                      cin>>arr[k][j];
                      return 0;
}
