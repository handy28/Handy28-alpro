#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cout<<"!!-------Program Persegi Panjang-------!!" << endl;
  cout<<"Masukkan Tinggi Persegi Panjang : ";
  cin>>c;
  cout<<endl;
  for (a=1;a<=c;a++)
  {
      for (b=a;b<c;b++)
      {
          cout<<"*"; // Sisi Kanan
      }

      for (b=1;b<=a;b++)
      {
          cout<<"*"; // Sisi Kiri
      }
      cout<
      cout<<endl;
  }
  return 0;
}
