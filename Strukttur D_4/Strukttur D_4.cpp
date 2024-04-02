// Strukttur D_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};


int main() {
    mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << "data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor mahasiswa :";
        getline(cin, mhs[i].nim);
        cout << "Nama mahasiswa :";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa :" << endl;
        cout << "\t Nama Desa :";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota :";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa :";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data mahasiswa ke-" << (i + 1) << ":" << endl;
       
    return 0;
}
