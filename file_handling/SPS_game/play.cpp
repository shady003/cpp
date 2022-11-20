#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
using namespace std;
int random2(){
                    srand(time(NULL));
                    int r = (rand()%3)+1;
                    return r;
}
int main()
{                  
    static int count , lose , draw ;
    int random;
    int finalR;
    //  int minimum = 1;
    //  int maximum = 3;
    string name,dummy ,computer , user;
    cout<<"Enter your full name"<<endl;
    cin>>name;
    // cin>>dummy;
    time_t t = time(NULL);
    char *time = ctime(&t);
    for (int i = 0 ; i < 3 ; i++){
        // time_t th = time(NULL);
   int finalR = random2();
    // cout<<finalR<<endl;
    if (finalR == 1){
                computer = "stone";
    }
    else if (finalR == 2 ){
        computer = "paper";
    }
    else if (finalR == 3 ){
        computer = "scissor";
    }
    else {
        cout<<"Something went wrong..."<<endl;
        try{
            throw 104;
        }
        catch(int e){
        cout<<"Error Code : "<<e<<endl;
    }

    }
    
    cout<<"Its round "<< i+1 <<" you have 3 rounds "
    <<"Enter your choice stone ,paper or scissor "<<endl;
    cin>>user;
    cout<<"Computer : "<<computer<<endl;
    if (user==computer){
        cout<<"Match Draw"<<endl;
        draw++;
    }
    else if (computer == "stone" && user == "paper" ){
        cout<<"You Win"<<endl;
        count++;
    }
    else if (computer == "paper" && user == "scissor"){
        cout<<"You win"<<endl;
        count++;
    }
    else if (computer == "scissor" && user == "stone"){
        cout<<"You win"<<endl;
        count++;
    }
    else {
        cout<<"You Lose"<<endl;
        lose++;
    }
    }
    cout<<"Your Score : "<<count;
    ofstream ofs("score.txt" , ios:: app);
        ofs<<"You Played Stone , Paper , Sissor"<<endl;
            ofs<<endl<<"New Record :  "<<time<<endl;
            ofs<<"Your Name : "<<name<<endl;
            ofs<<"Your Score : "<<count<<endl;
            ofs<<"You lost : "<<lose<<endl;
            ofs<<"Match draw : "<<draw<<endl;
    cout<<"\nData Saved to file Score.txt";
    return 0;
}