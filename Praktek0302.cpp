#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int panjang, lebar, luas, pilihan, alas, tinggi;
	
	cout <<"1.Persegi Panjang"<<endl;
	cout <<"2.Segitiga"<<endl;
	cout <<"Masukan Pilihan = ";
	cin >>pilihan;
	
		switch(pilihan){
		case 1:
		cout<<"Masukan Panjang = ";
		cin>>panjang;
		cout<<"Masukan Lebar = ";
		cin>>lebar;
		luas =panjang * lebar;
		cout<<"Luas Persegi Panjang="<<luas<<endl;
		system("pause");
		break;
		case 2:
		cout<<"Masukan Panjang Alas = ";
		cin>>alas;
		cout<<"Masukan Tinggi = ";
		cin>>tinggi;
		luas=0.5*alas*tinggi;
		cout<<"Luas Segitiga="<<luas<<endl;
		system("pause");
	}	
}
