#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuat dengan umur " << umur << "\n" << endl;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

