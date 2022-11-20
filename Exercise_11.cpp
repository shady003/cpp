#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};
class full_time : employee
{
private:
    float salary;

public:
    full_time(int id, string name, float salary)
    {
        setId(id);
        setName(name);
        this->salary = salary;
    }
    float getSalary()
    {
        return salary;
    }
    int fullDisplay()
    {
        cout << "Employee Details--- " << endl
             << "Full time employee ..." << endl
             << "Id : " << getId() << "  Name : " << getName() << "  Salary : " << getSalary()<<endl;
    }
};
class part_time : employee
{
private:
    float wages;

public:
    void setWages(float wages)
    {
        this->wages = wages;
    }
    float getWages()
    {
        return wages;
    }
    part_time(int id, string name, float wages)
    {
        setWages(wages);
        setName(name);
        setId(id);
    }
    int partDisplay()
    {
        cout << "Employee Details--- " << endl
             << "Part time employee ..." << endl
             << "Id : " << getId() << "  Name : " << getName() << "  Wagas : " << getWages()<<endl;
    }
};
int main()
{
    full_time *ptr = new full_time(1, "John", 5000);
    // full_time e1( 1 ,"John",5000);
    part_time e2(2, "Jennifer", 300);
    ptr->fullDisplay();
    e2.partDisplay();
    return 0;
}