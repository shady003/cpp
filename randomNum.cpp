#include <iostream>
#include <ctime>
using namespace std;
int main(){
            time_t dt = time(NULL);
            char* time = ctime(&dt);
            srand(dt);
            for (int i=0 ; i<3 ; i++){
                cout<<(rand()%3)+(1)<<endl;
                cout<<endl << (rand() % 10) + 1<<" ";}



    return 0;
}