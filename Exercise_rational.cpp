#include <iostream>
using namespace std;
class rational
{
private:
    double p, q;
public:
    rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }
    friend rational operator+(rational p, rational q);
    friend ostream &operator<<(ostream &out, rational r);
};
rational operator+(rational p, rational q)
{
    rational ret;
    ret.p = p.p + q.p;
    ret.q = p.q + q.q;
    return ret;
}
ostream &operator<<(ostream &out, rational r)
{
    out << "The result is " << r.p << "/" << r.q;
    return out;
}
int main()
{
    int p, q;
    rational r3;
    cout << "Enter the rational number to add in form of p and q respectively" << endl;
    cin >> p >> q;
    rational r1(p, q);
    cout << "Enter the Second rational number to add in form of p and q respectively" << endl;
    cin >> p >> q;
    rational r2(p, q);
    r3 = r1 + r2;
    cout << r3 << endl;
    return 0;
}