#include <iostream>
using namespace std;
// opps -classes amd objects
// c++ - initially called as c with classes bye stousstroup
// class ->> extention of structure
// sturcture has some limitaions
//      ->> member are public
//       ->> no methods
//  classes ->> structure + many more
//  classes ->> can have member an properties
// clasees ->> can make few member privet & few as public
//  we  can delcare object along with the class decration like this
/* class employee
    //class defintaion
    } rahul,amit,anurag;*/
//  rahul.salary = 8 makes no sense if salry is privet
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void zeros_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter binary string" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
        else
        {
            cout << "its binary" << endl;
            break;
        }
    }
}
void binary::ones_compliment(void)

{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::zeros_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}
void binary::display(void)
{
    cout << "displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    cout<<endl;
    b.display();
    b.zeros_compliment();
    cout<<endl;
    b.display();
    return 0;
}
