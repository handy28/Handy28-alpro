#include <iostream>
using namespace std;

//Tugas e-learning Nested Switch
// Program Input Data
int main () {
//Kamus
int Merk, Kualitas;
//Algoitma
//
cout << "!!**********Daftar Product Laptop**********!!" << endl;
cout << "1. Dell" << endl;
cout << "2. Lenovo" << endl;
cout << "3. Asus" << endl;
cout << "4. Accer" << endl;
cout << "Masukan pilihan :" ;
cin >> Merk;
//
cout << "!!**********Kualitas**********!!" << endl;
cout << "1. Kualitas Bagus" << endl;
cout << "2. Kualitas Sedang" << endl;
cout << "3. Kualitas Cukup" << endl;
cout << "4. Kualitas Standar" << endl;
cout << "Masukan pilihan :" ;
cin >> Kualitas;

switch (Merk) {
  case 1  :  cout << "**********Dell**********" << endl;
switch (Kualitas) {
  case 1  :  cout << "Harga : Rp.3.000.000,- Keatas" << endl;break;
  case 2  :  cout << "Harga : Rp.2.000.000,- Keatas" << endl;break;
  case 3  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;
  case 4  :  cout << "Harga : Rp.1.300.000,- Keatas" << endl;break;
}
break;
case 2  :  cout << "***********Lenovo**********" << endl;
switch (Kualitas) {
  case 1  :  cout << "Harga : Rp.2.500.000,- Keatas" << endl;break;
  case 2  :  cout << "Harga : Rp.1.800.000,- Keatas" << endl;break;
  case 3  :  cout << "Harga : Rp.1.300.000,- Keatas" << endl;break;
  case 4  :  cout << "Harga : Rp.1.000.000,- Keatas" << endl;break;
}
break;
case 3  :  cout << "**********Asus**********" << endl;
switch (Kualitas) {
  case 1  :  cout << "Harga : Rp.2.800.000,- Keatas" << endl;break;
  case 2  :  cout << "Harga : Rp.2.000.000,- Keatas" << endl;break;
  case 3  :  cout << "Harga : Rp.1.800.000,- Keatas" << endl;break;
  case 4  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;
}
break;
case 4  :  cout << "***********Accer**********" << endl;
switch (Kualitas) {
  case 1  :  cout << "Harga : Rp.1.800.000,- Keatas" << endl;break;
  case 2  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;
  case 3  :  cout << "Harga : Rp.1.300.000,- Keatas" << endl;break;
  case 4  :  cout << "Harga : Rp.1.000.000,- Keatas" << endl;break;
}
break;
default : cout << "Salah Input" << endl;
}

 return 0;
}
