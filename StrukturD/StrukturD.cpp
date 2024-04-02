// StrukturD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << " Nama Mahasiswa : ";
	cin >> mhs.nama;
	cout << " Alamat Mahasiswa :";
	cin >> mhs.alamat;
	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\nNIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\n Umur : " << mhs.umur;

}