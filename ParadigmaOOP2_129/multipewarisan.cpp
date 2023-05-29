#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat \n" << endl;
    }
    ~orang() {
        cout << "orang dihapus \n" << endl;
    }
};

class manusia {
public:
    string jeniskelamin;

    manusia(string pJeniskelamin) :
        jeniskelamin(pJeniskelamin) {
        cout << "Manusia dibuat \n" << endl;
    }
    ~manusia() {
        cout << "Manusia dihapus \n" << endl;
    }

};

class pelajar : private manusia, public orang {
public:
    string sekolah;

    pelajar(string pNama, string pJeniskelamin, string pSekolah) :
        orang(pNama),
        manusia(pJeniskelamin),
        sekolah(pSekolah) {
        cout << "Pelajar dibuat \n" << endl;
    }
    ~pelajar() {
        cout << "Pelajar dihapus \n" << endl;
    }
    string perkenalan() {
        return "Hali, nama saya " + nama + " dengan jenis kelamin " + jeniskelamin + " dari sekolah " + sekolah + "\n\n";
    }
};

int main()
{
    pelajar andi("andi laksono", "Laki-laki", "belajarcpp");
    cout << andi.perkenalan();

    return 0;
}
