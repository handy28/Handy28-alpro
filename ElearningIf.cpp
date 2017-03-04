#include <iostream>
using namespace std;

//Tugas e-learning

//Kamus

int main() {

  int a, b;
  cout << "!!----Pengukuran Berat Badan----!!" << endl;
  cout << "1. Pria" << endl;
  cout << "2. Wanita" << endl;
  cout << "Masukan pilihan :" ;
  cin >> a;
  cout << "Masukan Berat badan :" ;
  cin >> b;

  if (a == 1) {
    if (b >= 168 ) { cout << "--Berat Memenuhi Kriteria--" << endl;}
    else { cout << "--Berat memenuhi Kriteria--" << endl;}
    }
  if (a == 2) {
    if (b >= 159 ) { cout << "--Berat Memenuhi Kriteria--" << endl;}
    else { cout << "--Berat memenuhi Kriteria--" << endl;}
    }
return 0;

}
