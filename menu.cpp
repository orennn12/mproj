#include <iostream>
#include <conio.h>
using namespace std;

int data[100000], salin[100000];
int n;

void salinData() {
  for (int i = 0; i < n; i++){
    salin[i] = data[i];
  }
}

void sortData(int data[], int n){
  int titip;
  for (int i = 1; i < n; i++){
    titip = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] > titip){
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = titip;
  }
}

void dMenu(){
system("cls");
cout<<"Menu Utama"<<"\n";       
cout<<"1. Masukkan Data"<<"\n";            
cout<<"2. Tampilkan Data"<<"\n";            
cout<<"3. Urutkan Data"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Keluar"<<"\n";           
cout<<"Pilih menu (1-5) :";        
}

void masukkanData(){
  system("cls");
  cout << "Masukkan Data : ";
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cout << "Data ke-" << i + 1 << ": ";
    cin >> data[i];
  }
  salinData();

  cout << "Data berhasil dimasukkan\n";
  getch();
}

void tampilkanData(){
  system("cls");
  cout << "Data yang dimasukkan: \n ";
  for (int i = 0; i < n; i++){
    cout << salin[i] << " ";
  }
  
  getch();
}

void urutkanData(){
  system("cls");
  sortData(data, n);
  cout << "Hasil data: \n";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
}

getch();
}

void info(){
  system("cls");
  cout<< "Sudahi ngodingmu, mari kita turu";
  getch();
  }

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    masukkanData();
    break;
   case '2':
    tampilkanData();
    break;  
   case '3':
    urutkanData();
    break;  
   case '4':
    info();
    break;  
    case '5':
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


}
 while (pl!='5');
  return 0;
}