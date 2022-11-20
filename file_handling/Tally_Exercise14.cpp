#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
class item
{
public:
    string name;
    long double price;
    int quantity;

    item() {}
    void itm(string n, long double p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }
    friend ofstream &operator<<(ofstream &out, item &s);
    // friend ifstream &operator>>(ifstream &in, item &s);
    friend ostream &operator<<(ostream &out, item &s);
};
ofstream &operator<<(ofstream &out, item &s)
{
    out << "Name : " << s.name << endl
        << "Price : " <<s.price << endl
        << "Quantitiy : " << s.quantity << endl;
    return out;
}
// ifstream &operator>>(ifstream &in, item &s)
// {
//     in>>s.name>>s.price>>s.quantity;
//     return in;1
// }
ostream &operator<<(ostream &out, item &s)
{
    out << s.name << fixed << s.price << s.quantity;
    return out;
}
int main()
{
    cout << "Number of items you want to enter :  " << endl;
    int num;
    cin >> num;
    item *itm = new item[num];
    /*Writing_part*/
    ofstream ofs("Item.txt", ios::app);
    // Printing time here...
    time_t t = time(0);
    char* time = ctime(&t);
    ofs<<endl<<"New Record : "<<time<<endl;
    // Time Printed in file...
    for (int i = 0; i < num; i++)
    {
        string name;
         long double price;
        int quantity;
        // ofs << "\nItem :" << i + 1 << ": \n\n";
        cout << "Enter_Name : ";
        cin >> name;
        cout << "Price : ";
        cin >> price;
        cout << "Quantity : ";
        cin >> fixed >> quantity;
        itm[i].itm(name, price, quantity);
        ofs << itm[i];
    }
    cout << "Data is loadead ...";
    ofs.close();
    /*reading_Part*/
    /*Code_Need_To_Check*/
    int read;
    cout << "To Read the entered data press 1 or press 0 ." << endl;
    cin >> read;
    if (read == 1)
    {
        ifstream ifs("item.txt");
        cout << "Reading Data..." << endl;
        while(!ifs.eof())
        {
            string s1;
            getline(ifs, s1);
            cout << s1 << endl;
            getline(ifs, s1);
            cout << s1 << endl;
            getline(ifs, s1);
            cout << s1 << endl;
        }
    }
    else
    {
        cout << "Wrong input1";
    }
    std::fstream::close;
    system("pause>0");
    return 0;
}