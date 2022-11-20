#include <iostream>
using namespace std;
int main(){
                    int *p = new int[1048576];
                    for(int i = 0 ; i<=1048576; i++)
                    {

                        p[i]=2147483647;
                    }
                    for(int i = 0 ; i<=1048576; i++)
                    {

                        cout<<p[i]<<endl;
                    }
                    

                    cout.flush();
                    cin.ignore(10000,'\n');
                    cin.ignore(10000,'\n');




    return 0;
}