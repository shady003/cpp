#include <iostream>
using namespace std;
class super
{

private:
    int x, y;

public:
    static int count;
    super()
    {
        x = 10;
        y = 10;
        count++;
    }
    void show()
    {
        cout << x << " " << y << " " << count << endl;
    }
    static void coun(){
        cout<<count<<endl;
    }
};
 int super::count = 0;    // TO MAKE A STATIC VARIABLE IN CLASS, WE HAVE TO INISILIZE IT OUTSIDE THE CLASS USING SCOPE [SCOPE RESOLUSTION OPERATOR] TO CLASS  ...

int main()
{
    int n;
    cin >> n;
        super s[n];  //COUNT VALUE WILL BE FULLY INCRIMENTED HERE COZ THE ARRAY OF DATA TYPE CLASS WILL CALL THE CONSTRUCTER HERE ONLY NUMBER OF TIMES THE ARRAY'S LENGTH OF... 

    for (int i = 0; i < n; i++)
    {
        s[i].show();
        s[i].coun();
    }

    // super s1;
    // s1.show();
    // super s2;
    // s2.show();

    return 0;
}