#include <iostream>
using namespace std;

int main(){
	int j = 0;
	string array[10];
	cout << "masukan elemen array: " << endl;
	// perulangan
	for (int i = 0; i<10; i++){
		cout << "Elemen " << i+1 << " = ";
		cin >> array[i];
	}
	cout << " masing masing elemen"<< endl;
	//pengulangan
	for (int i = 0; i<10; i++){
		//scan elemen A
		if (array[i] == "A"){
			j++;
		}
		cout << "Elemen " << i+1 << " = " << array[i] << endl;
	}
	cout << " jumlah kemunculan elemen A :" << j;
	return 0;
}