#include <iostream>
using namespace std;

int main(){
	char nama[15];
	cin.ignore();
	char npm[10];
	
	cin.get(nama,15);
	cin.ignore();
	cin.get(npm,10);
	
	cout << "Nama : " << nama << endl;
	cout << "NPM  : " << npm <<  endl;
}
