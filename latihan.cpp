#include <iostream>
using namespace std;

int main (){
	//Float jenis data berbentuk desimal
  float ip, total = 0, rata; //ip adalah variabel(Tempat penyimpanan) untuk nilai ipk
  int mhs = 0, lls = 0, tls = 0;

  cout << "Masukan nilai IP: " ;
  cin >> ip;

  while (ip != -999) {
  	
  	if (ip >=0 && ip <=4) { 
  		mhs++; 
  		total += ip;
  	
  	if (ip <= 2.75) { tls++; }
   	if (ip >= 2.75) { lls++; }
  }


  	cout << "Masukan nilai IP: " ;
  	cin >> ip;
  }

	cout << "Banyak Mahasiswa : " << mhs << endl;


  	cout << "Jumlah Mahasiswa Lulus : " ;
  	cout << lls;
  	cout << endl;

  	cout << "Jumlah Mahasiswa Tidak Lulus : " ;
  	cout << tls;
  	cout << endl;

  	rata = total/mhs;
	cout << "Rata rata nilai IP : " ;
  	cout << rata;
  	cout << endl;

  return 0;
}