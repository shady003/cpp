#include <iostream>
#include <fstream>
using namespace std;
int main(){
        string name ;
        ofstream outfile("mytxt.txt" , ios::app);
        label:
            cout<<"Enter name to append \n Or press 0 to exit \n";
            getline(cin,name);
            if (name == "0"){
                goto exit;
            }
            else {
            outfile<<"\nName: "<<name<<endl;
            goto label;
            }
            exit:
            outfile.close();
            cout<<"\nFile is appended and now program is exiting...";
            system("pause > 0");
            return 0;
}