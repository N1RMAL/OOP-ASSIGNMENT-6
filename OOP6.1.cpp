#include <iostream>
#include <string.h>
using namespace std;

int maths, oop, se, ds;

class ICA
{
    public:
    
    int imaths, ioop, ise, ids;
    
    void inputICA()
    {
        cout << "Enter the ICA marks:\n";
        cout << "MATHS: ";
        cin >> imaths;
        cout << "\nOOP: ";
        cin >> ioop;
        cout << "\nSE: ";
        cin >> ise;
        cout << "\nDS: ";
        cin >> ids;
    }
    friend void Total(ICA);
};
    
class TEE
{
    public:
    
    int tmaths, toop, tse, tds;
    
    void inputTEE()
    {
        cout << "\n\nEnter the TEE marks:\n";
        cout << "MATHS: ";
        cin >> tmaths;
        cout << "\nOOP: ";
        cin >> toop;
        cout << "\nSE: ";
        cin >> tse;
        cout << "\nDS: ";
        cin >> tds;
    }
    friend void Total(TEE);
};

void total(ICA ica, TEE tee)
{
    maths = tee.tmaths + ica.imaths;
    oop = ica.ioop + tee.toop;
    se = ica.ise + tee.tse;
    ds = ica.ids + tee.tds;
    
    std::cout << "\n\nTotal marks of student\n\n";
    std::cout << "Maths: " << maths << endl << endl;
    std::cout << "OOP:  "<< oop << endl << endl;
    std::cout << "SE: " << se << endl << endl;
    std::cout << "DS: " << ds << endl << endl;
    
}

int main()
{
     ICA ica;
     TEE tee;
     ica.inputICA();
     tee.inputTEE();
     total(ica, tee);
     return 0;
}

