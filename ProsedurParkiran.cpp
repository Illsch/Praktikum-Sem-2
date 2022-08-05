#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>
using namespace std;

void Tampilan_Kelompok(){
    cout << "\t\t Dibuat Oleh :" << endl;
    cout << "\t\t\t\t Rafi Aflah G. \t Alfi M. Dzikra" << endl;
    cout << "\t\t\t\t [ 20210801182]\t [ 20210801237]";
}
void Tampilan_Program(){
    cout << endl << endl;
    cout << "\t\t ================================================" << endl;
    cout << "\t\t      PROGRAM C++ BIAYA PARKIR KENDARAAN \n" << endl;
    cout << "\t\t\t 1. Mobil. \t\t2. Motor." << endl;
    cout << endl;
}
void Tampilan_Ulang(){
    cout << "\n\n\n\n" << endl;
    cout << "\t\tIngin mengulang ? \n" << endl;
    cout << "\t\t\ty.Iya \tt.Tidak \n" << endl;
    cout << "\t\tPilih \t: ";
}
void Proses_Program(int jenis,long int lama){
    long int jam, harga, tambahan, perhari, jam_selanjutnya, days;
    int hari = 24;
    switch (jenis){
        case 1: { 
            harga = 4000;
            tambahan = 2000;
            perhari = 30000;
            break;
        }
        case 2: {
            harga = 3000;
            tambahan = 1000;
            perhari = 20000;
            break;
        }
    }
    if (lama > 1) {
        jam = lama-1;
        jam_selanjutnya = jam*tambahan;
    }
    else {
        jam_selanjutnya=0;
    }
    cout << "\t\t ================================================" << endl;
    cout << "\t\t 1 Jam Pertama \t\t\t: Rp." << harga << endl;
    cout << "\t\t Tambahan Per Jam Selanjutnya \t: Rp." << jam_selanjutnya << endl;
    cout << "\t\t\t\t\t\t:(Rp." << tambahan<<" x" << jam << ")" << endl;
    if (lama >= 24){
        long int a = lama; long int b = hari;
        long int temp_days = a/b;
        days = temp_days*perhari;
        cout << "\t\t Biaya Menginap (Perhari) \t: Rp." << days << endl;
        cout << "\t\t\t\t\t\t:(Rp." << perhari << " x" << temp_days << ")" << endl;
    }
    cout << "\t\t ----------------------------------------------- +"<< endl;
    cout << "\t\t Total Bayar \t\t\t: Rp."<< harga+jam_selanjutnya+days << endl;
    cout << "\t\t ================================================"<< endl;
}

int main() {
    long int jenis, lama;
    char ulang[0];
    do{
        system ("cls");
        Tampilan_Program();
        cout << "\t\t Masukkan Jenis Kendaraan\t: "; cin >> jenis;
        cout << "\t\t Masukkan Lama Parkir (Per Jam)\t: "; cin >> lama;
        Proses_Program(jenis,lama);
        Tampilan_Kelompok();
        Sleep(4700);
        system("cls");
        Tampilan_Ulang();
        cin >> ulang;
    } while (ulang != "y");
}