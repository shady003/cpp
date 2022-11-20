#include <iostream>
#include <fstream>
using namespace std;
class Worker {
    private :  int Sr;
                string name;
               long long phone ;
               long double salary ;
            public :
            void setData(int a, string b ,long long c,long double sl){
                        Sr = a;
                        name = b;
                        phone = c;
                            salary = sl ;
            }
            void getData(){
                cout<<"Serial No. = "<<Sr<<endl<<"Name : "<<name<<endl<<"Phone :"<<phone<<endl<<"Salary: "<<salary<<endl;
            }
            
           friend void totalSalary(int n , Worker w[]);
};
 void totalSalary(int n ,Worker w[]){ long double total = 0 ;
            
                for(int k = 1 ; k<n ; k++){
                    
                    total = total + w[k].salary ;
                }
                cout<<"Total amount to pay to employees is : "<<total<<endl;
            }
// The main code start here...
int main (){ int num;
            cout<<"Enter how much employes you have "<<endl;
            cin>>num;
    class Worker w[num] ;
        int serial ;
        long long ph;
        long double sal;
        string n , temp;
        for (int i =0; i<num ;i++){
                        cout<<"Entering Data strats here for "<<i+1<<" employee"<<endl;
                        cout<<"Enter Serial number first : "<<endl;
                            cin>>serial;
                        cout<<"Enter the full name : "<<endl;
                        getline(cin,temp);
                           getline(cin,n);
                        cout<<"Enter the phone number here : "<<endl;
                            cin>>ph;
                        cout<<"Enter employee salary : "<<endl;
                            cin>>sal;
            w[i].setData(serial , n , ph , sal);
            
            }
            
            for (int j =0; j<num ;j++){
                cout<<"The data of "<<j+1<<" Employee"<<endl;
                w[j].getData();
                
            }
                    totalSalary(num,w);
                    ofstream outfile("worker_data.txt"); file work... Not yet completed .
                FILE *ptr = NULL ;
                ptr = fopen("worker_data.txt","a");
                for (int k = 0 ; k < num ; k++){

                    fprintf(ptr, w[k].getData());
                }

  cout<<"Press enter to exit >>>";
    cout.flush();
    
    cin.ignore(10000,'\n');
    cin.ignore(100000,'\n');
 
    return 0 ; 
}