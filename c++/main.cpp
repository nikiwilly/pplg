#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	// deklarasi variable NAMA tipe datanya STRING
	string nama;

	// tampilkan Nama :
	cout << "Nama : ";
	
	// input/ketik yang nantinya apa yang diketik oleh user disimpan di  variable NAMA
	cin>>nama;
	
	// tampikan NAMAU ADALAH disambung dengan hasil inputan yang diketika untuk mengisi variable NAMA diatas
	cout << "Namamu adalah "<<nama;	
	
	return 0;

}     