#include <iostream>
using namespace std;
int main(){         cout<<"Enter the numbers of elements you want in array"<<endl;
                    int n , key ;
                    cin>>n;
                int arr[n];
                for (int i = 0 ; i<n ; i++)
                {
                    cin>>arr[i];
                }
                label :
                cout<<"Enter the value to search";
                cin>>key;
                for (int i=0 ; i<n ; i++){
                        if (key == arr[i]){

                            cout<<key<<" found at "<<i<<endl;
                            cout<<"Enter any key to exit >>>";
                            cout.flush();
                            cin.ignore(10000,'\n');
                            cin.ignore(10000,'\n');
                            return 0 ;
                        }
                        



                }

cout<<"Wrong Input";
                            goto label;




}