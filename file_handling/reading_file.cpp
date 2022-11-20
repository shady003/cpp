#include <iostream>
#include <fstream>
using namespace std;
int main(){
                ofstream ofs("check.txt" , ios ::trunc);
                ofs<<"WE NEED TO CHECK \n end of line";
                ofs.close();
                ifstream ifs("check.txt");
                for (string s  ; s == "end of line" ; ){
                     getline(ifs,s);
                    // ifs>>s;
                    cout<<s;
                }
                ifs.close();
                // string check;  
                // getline(ifs,check);
                // cout<<check;
        //    cout<<60000000;
    return 0;
}