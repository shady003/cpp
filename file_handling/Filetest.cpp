#include <iostream>
#include <fstream>
using namespace std;
int main(){
            string read;
    ofstream ofs("test.txt", ios::trunc);
    ofs<<"Hello";
    ofs.close();
    ifstream ifs("test.txt");
    
    ifs>>read;
    cout<<read;





    return 0;
}