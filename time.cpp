#include <iostream>
#include<ctime>
#include <random>
using namespace std;
int main(){



                time_t dt = time(0);
                char * t = ctime(&dt);
                cout<<t;
                srand(dt);
                // rand(4,5,6);
                cout<<rand()<<endl;
                cout<<rand() % 2 +1<<endl;
                // random_device rs;
                cout<<rand() % (3-1+1)+1<<endl;
        srand(dt);
                for (int i = 0 ; i < 3 ; i++){
                 int randNum = (rand() % 3) + 1;
    int random = rand();
    int minimumN = 1;
    int maximumN = 3;
    // int finalR = random % (maximumN - minimumN + 1) - minimumN ;
   
    cout<<randNum<<endl;
    }

    return 0;
}