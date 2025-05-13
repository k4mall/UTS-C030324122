#include <iostream>
#include <conio.h>
using namespace std;

int data[6];
int jumlahData = 6;

void dMenu(){
system("cls");
cout<<"Aplikasi Exchange sort"<<"\n";       
cout<<"1. Memasukkan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void inputdata(){
  system("cls");
  cout << "Masukkan 6 angka:" << endl;
  for (int i = 0; i < jumlahData; i++) {
      cout << "Data ke-" << i + 1 << " = ";
      cin >> data[i];
  }
  getch();
}

void outputdata(){
  system("cls");
  cout << "Outputnya: ";
    for (int i = 0; i < jumlahData; i++) {
        cout << data[i] << " ";
    }
  getch();
}

void sorting(){
  system("cls");
   for (int i = 0; i < jumlahData - 1; i++) {
    for (int j = i + 1; j < jumlahData; j++) {
        if (data[i] < data[j]) {
            int tukar = data[i];
            data[i] = data[j];
            data[j] = tukar;
        }
    }
}

cout << "\nSorting:\n";
for (int i = 0; i < jumlahData; i++) {
    cout << data[i] << " ";
}
  getch();
}

void sepatahKata(){
  system("cls");
  cout <<"Kalo cape istirahat \n @k4mall";
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
    /* code */
    inputdata();
    break;
   case '2':
    outputdata();
    /* code */ 
    break;  
   case '3':
    sorting();
    /* code */
    break;  
   case '4':
    sepatahKata();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}