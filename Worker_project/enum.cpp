#include <iostream>
using namespace std;
enum captain {Avi , Sid , Robby ,Sami ,Jake};
enum superCars{Venom = 301 , Veyron=268 , Valkyrie =240 , Roadster=250};

int main(){
            // captain cap = Avi ;
            // if(cap==Avi)
            //     cout<<cap<<endl;
            // else 
            //     cout<<"no choice";
            superCars spd1 = Valkyrie;
            superCars spd2 = Roadster;
            // superCars spd3 = Venom;
            if (spd1>spd2)
                    cout<<"Valkyrie has more speed among both"<<endl;
            else 
                    cout<<"Roadster has more speed among both"<<endl;
    return 0;
}