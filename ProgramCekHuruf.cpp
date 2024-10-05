#include <iostream>
using namespace std;

bool cekKapital(char karakter){
  return (karakter >= 'A' && karakter <= 'Z');
}

bool cekkecil(char karakter){
  return(karakter >= 'a' && karakter <= 'z');
}

void tampilkanMenu(){
  cout << "PILIH" << endl;
  cout << "1. Cek huruf kapital" << endl;
  cout << "2. Cek huruf kecil" << endl;
  cout << "3. Keluar" << endl;

}

bool cekHuruf(char karakter){
  return (karakter >= 'A' && karakter <= 'Z')||
    (karakter >= 'a' && karakter <= 'z');
}
