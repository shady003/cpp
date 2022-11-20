#include <iostream>
using namespace std;
class Instruments
{
public:
    virtual void Play() = 0;
    // {
    //     cout<<"Instument Playing..."<<endl;
    // }
};
class Piano : public Instruments
{
public:
    void Play()
    {
        cout << "Piano Playing..." << endl;
    }
};
class Sexophone : public Instruments
{
public:
    void Play()
    {
        cout << "Sexophone Playing..." << endl;
    }
};
class Harmonium : public Instruments
{
public:
    void Play()
    {
        cout << "Harmonium Playing..." << endl;
    }
};
int main()
{
    Instruments *I[3];
    I[1] = new Sexophone;
    I[0] = new Piano;
    I[2] = new Harmonium;
    for (int i = 0; i < 3; i++)
    {
        I[i]->Play();
    }
    Sexophone i1;
    cout<<"polymorphisum test \n";
    i1.Play();
    system("pause > 0");
    return 0;
}