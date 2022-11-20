#include <iostream>
using namespace std;
void allocatememroy(std:: string* str){
    *str = "memory allocation test";
}
int main(){
            string str[50];
            allocatememroy(str);
    return 0;
}