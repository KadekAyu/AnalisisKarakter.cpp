#include <iostream>
using namespace std;

bool cekKapital(char karakter){
  return (karakter >= 'A' && karakter <= 'Z');
}

bool cekKecil(char karakter){
  return(karakter >= 'a' && karakter <= 'z');
}

void tampilkanMenu(){
  cout << "PILIH" << endl;
  cout << "1. Cek huruf kapital" << endl;
  cout << "2. Cek huruf kecil" << endl;
  cout << "3. Keluar" << endl;

}

bool cekHuruf(char karakter){
  return (karakter >= 'A' && karakter <= 'Z') || (karakter >= 'a' && karakter <= 'z');
}

int main() {
  int pilihan;
  char karakter;

  do {
      tampilkanMenu();
      cout << "Masukkan pilihan: ";
      cin >> pilihan;

      switch (pilihan) {
          case 1:
              cout << "Masukkan karakter: ";
              cin >> karakter;
              if (cekHuruf(karakter)) {
                  if (cekKapital(karakter)) {
                      cout << karakter << " adalah huruf kapital"  << endl;
                  } else {
                      cout << karakter << " bukan huruf kapital" << endl;
                  }
              } else {
                  cout << "Input tidak valid, Silakan masukkan huruf" << endl;
              }
              break;
            
             case 2:
                cout << "Masukkan karakter: ";
                cin >> karakter;
                if (cekHuruf(karakter)) {
                    if (cekKecil(karakter)) {
                        cout << karakter << " adalah huruf kecil" << endl;
                    } else {
                        cout << karakter << " bukan huruf kecil" << endl;
                    }
                } else {
                    cout << "Input tidak valid, Silakan masukkan huruf" << endl;
                }
                break;
            case 3:
                cout << "Keluar program" << endl;
                break;
            default:
                cout << "Pilihan tidak valid, Silakan coba lagi" << endl;
        }
        cout << endl;
    } while (pilihan != 3);

    return 0;
}
