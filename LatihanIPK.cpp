#include <iostream>
//I.S Aplikasi Menghitung Nilai IPK
//F.S Menampilkan Proses pencari IPK

using namespace std;

int main (){
	//Float jenis data berbentuk desimal
  float ip, total = 0, rata; //ip adalah variabel(Tempat penyimpanan) untuk nilai ipk
  int mhs = 0, lls = 0, tls = 0;

  //Input nilai ipk mahasiswa
  cout << "Masukan nilai IP: " ;
  cin >> ip;

  //Pengulangan Masukan Nilai IPK
  while (ip != -999) {
  	//Penghentian jika pengguna mengetik -999

  	if (ip >=0 && ip <=4) { 
  		//Increment Nilai mahasiswa yg tergolong ip 0 - 4
  		mhs++; 
  		//Mencari nilai seluruh ipk
  		total += ip;
  	
  	if (ip <= 2.75) { tls++; }
   	if (ip >= 2.75) { lls++; }
  }


  	cout << "Masukan nilai IP: " ;
  	cin >> ip;
  }
  	//Menampilkan Banyak Mahasiswa
	cout << "Banyak Mahasiswa : " << mhs << endl;

	//Menampilkan mahasiswa yg lulus
  	cout << "Jumlah Mahasiswa Lulus : " ;
  	cout << lls;
  	cout << endl;
  	//Menampilkan mahasiswa yg tidak lulus
  	cout << "Jumlah Mahasiswa Tidak Lulus : " ;
  	cout << tls;
  	cout << endl;
  	//Menampilkan hasil rata rata
  	rata = total/mhs;
	cout << "Rata rata nilai IP : " ;
  	cout << rata;
  	cout << endl;

  return 0;
}