#include <iostream>
using namespace std;
//PROGRAM PERHITUNGAN ANGKA KEMATIAN
//E-LEARNING DO WHILE
int main () {
//Kamus
  int i = 2015;
//ALGORITMA
do
   {
      // Kamus
       int j = 300;
       do
       {
          //OUTPUT DATA
           cout << "TAHUN : " << i << " ANGKA KEMATIAN : " << j << endl;
           j--;
       }while(j > 250);
i--;
   }while(i > 2000);

   return 0;
}
