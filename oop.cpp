#include <iostream>
using namespace std;

class Mahasisawa{
    public :
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout << "Nim :" << nim << endl;
        cout << "Nama :" << nama << endl;
        cout << "Nilai :" << nilai << endl;
    }

};

int main(){
    Mahasisawa mhs;

    mhs.nim = 2024;
    mhs.nama = "Lirili Larila";
    mhs.nilai = 80.5;

    mhs.printData();

}