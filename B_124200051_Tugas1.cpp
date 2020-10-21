#include <iostream>

using namespace std;

int main ()
{
	int panjang,lebar,tinggi,lp,v ;
	
	cout<< "-------------------------------------------" <<endl;
	cout<< "|Tugas Praktikum Algoritma dan Pemrograman|" <<endl;
	cout<< "|NIM : 124200051                          |" << endl;
	cout<< "|Nama : Dikhi Dewantoro                   |" << endl;
	cout<< "-------------------------------------------" <<endl;
	cout<< "" <<endl;
	
	cout <<"|------------------------------------------|"<<endl;
	cout <<"|MENGHITUNG LUAS PERMUKAAN DAN VOLUME BALOK|"<<endl ;
	cout <<"|------------------------------------------|"<<endl;
	cout <<"masukan panjang : ";
	cin>> panjang;
	cout <<"masukan lebar   : ";
	cin >> lebar;
	cout << "masukan tinggi  : ";
	cin >> tinggi;
	
	lp = (2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi);
	v = panjang*lebar*tinggi;
	
	cout <<"luasPermukaan adalah :" << lp << endl ;
	cout << "Volume adalah :" << v ;
	
	
}

