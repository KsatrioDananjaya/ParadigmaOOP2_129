#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedclass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived Class";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
