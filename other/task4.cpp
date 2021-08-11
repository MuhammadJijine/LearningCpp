#include <iostream>
using namespace std;

class Player
{
    private : 
    int size;
    string m_name;
    double m_hp=100;
    int m_level=0;

    public :
    
    double Gethp()
    {
        return m_hp;
    }
    string Getname()
    {
        return m_name;
    }
    int Getlevel()
    {
        return m_hp;
    }
    void Sethp(double hp)
    {
        m_hp=hp;
    }
    void Setlevel(int level)
    {
        m_level=level;
    }
    void SetName(string name)
    {
        size=m_name.length();
        if (size<3)
        {
            cout << "Ur name is less than 3 letters" << endl;
            exit(3);
        }
        if (size>14)
        {
            cout << "Ur name is more than 14 letters" << endl;
            exit(3);
        }
        if (m_name.find(',') != std::string::npos || m_name.find('.') != std::string::npos || m_name.find('\"') != std::string::npos || m_name.find('\'') != std::string::npos || m_name.find(';') != std::string::npos )
        {
            cout << "There are punctuation marks in your name" << endl;
            exit(3);
        }
    }
    void print()
    {
        cout << "name : <" << m_name << ">" << endl;
        cout << "level : <" << m_level << ">" << endl;
        cout << "hp : <" << m_hp << ">" << endl;
    }
};

int main()
{
    string name;
    Player p;
    getline(cin,name);
    cout << "Enter ur name : ";
    p.SetName(name);
    p.print();
    return 0;
}