#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>

using namespace std;

void Tampilan_Awal_Soal_1(){
    cout<<endl<<endl<<endl<<endl;
    cout<< "\t\t\t\t\tSoal berisikan 10 soalan !!";
    Sleep (1300);
    system("cls");
}
void Tampilan_Awal_Soal_2(){
    cout<<endl<<endl<<endl<<endl;
    cout<< "\t\t\t\t\tSoal berisikan 25 soalan !!";
    Sleep (1300);
    system("cls");
}
void Tampilan_Awal(){
    cout << endl << endl << endl;
    cout << "\t\tSimulasi Permainan Soal Dasar Matematika" << endl;
    cout << "\t\toleh :\t Rafi Aflah G. \t  & \tAlfi M. Dzikra" << endl;
    cout << "\t\t\t [ 20210801182] \t[ 20210801237] \n" << endl;
    cout << "\t\t1. Soal Penjumlahan\t4. Soal Pembagian" << endl;
    cout << "\t\t2. Soal Pengurangan\t5. Soal Campuran 1" << endl;
    cout << "\t\t3. Soal Perkalian\t6. Soal Campuran 2" << endl;
    cout << "\t\t\t\t7. Keluar" << endl;
    cout << "\t\tPilih : ";
}
void Tampilan_Exit(){
    system("cls");
    cout<<endl<<endl<<endl;
    cout<< "\t\tApakah anda yakin ?" <<endl<<endl;
    cout<< "\t\t\t1. Iya.\t\t\t2. Tidak." <<endl<<endl;
}
void Soal_Penjumlahan(){
    int soal = 1; int nilai = 0;
    int w,x,y,z;
    int soaltipe;
    char pilihan;
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 10){
        w = (rand()%11); x = (rand()%11); y = (rand()%11);
        soaltipe = (rand()%3);
        switch(soaltipe){
            case 1: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 2: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " + " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w+x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
        }
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*10;
    Sleep(1600);
}
void Soal_Perkalian(){
    int soal = 1; int nilai = 0;
    int w,x,y,z;
    int soaltipe;
    char pilihan[0];
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 10){
        w = (rand()%11); x = (rand()%11); y = (rand()%11);
        soaltipe = (rand()%3);
        switch(soaltipe){
            case 1: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " x " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x*y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 2: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " x " << x << " x " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w*x*y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
        }
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*10;
    Sleep(1600);
}
void Soal_Pengurangan(){
    int soal = 1; int nilai = 0;
    int w,x,y,z;
    int soaltipe;
    char pilihan[0];
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 10){
        w = (rand()%11); x = (rand()%11); y = (rand()%11);
        soaltipe = (rand()%3);
        switch(soaltipe){
            case 1: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " - " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x-y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 2: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " - " << x << " - " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w-x-y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
        }
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*10;
    Sleep(1600);
}
void Soal_Pembagian(){
    int soal = 1; int nilai = 0;
    int x,y,z,mod;
    char pilihan[0];
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 10){
        x = (rand()%10+1); y = ((rand()%10+1));
        y!= 0; 
        cout << endl << endl << endl;
        cout << "\t\t" << soal << ". " << x << " : " << y << " = ..." << endl;
        //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
        //cout << "\t\tb. ";cout << "\t\td. " << endl;//
        cout << "\t\tJawaban \t: ";cin >> z;
        cout << "\t\tSisa \t\t: ";cin >> mod;

        if (z!=x/y || x%y!=mod){
            cout << endl << "\t\t\tKamu Salah"; 
            Sleep(900);
        }
        else {
            cout << endl << "\t\t\tKamu Benar";
            nilai++;
            Sleep(900);
        }
        soal++;
        system ("cls");
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*10;
    Sleep(1600);
}
void Soal_Campuran_1(){
    int soal = 1; int nilai = 0;
    int w,x,y,z;
    int soaltipe;
    char pilihan;
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 25){
        w = (rand()%11); x = (rand()%11); y = (rand()%11);
        soaltipe = (rand()%8);
        switch(soaltipe){
            case 1: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 2: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " - " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x-y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 3: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " + " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w+x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 4: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << x << " x " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;

                if (x*y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 5: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " + " << x << " - " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w+x-y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 6: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " - " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w-x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 7: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " x " << x << " + " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w*x+y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
        }
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*4;
    Sleep(1600);
}
void Soal_Campuran_2(){
    int soal = 1; int nilai = 0;
    int v,w,x,y,z,mod;
    int soaltipe;
    char pilihan;
    bool salah;
    srand((unsigned)time(0));
    while (soal <= 25){
        v = (rand()%10+1); w = (rand()%10+1); x = (rand()%10+1); y = (rand()%10+1);
        soaltipe = (rand()%6);
        switch(soaltipe){
            case 1: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " - " << x << " x " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w-(x*y)!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 2: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " + " << x << " x " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w+(x*y)!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 3: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " x " << x << " - " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                if (w*x-y!=z){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 4: {
                w = (rand()%100+1);
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " : (" << x << " x " << y << ") = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                cout << "\t\tSisa \t\t: ";cin >> mod;
                if (z!=w/(x*y) || mod!=w%(x*y)){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
            case 5: {
                cout << endl << endl << endl;
                cout << "\t\t" << soal << ". " << w << " x " << x << " : " << y << " = ..." << endl;

                //cout << "\t\ta. ";cout << "\t\tc. " << endl;//
                //cout << "\t\tb. ";cout << "\t\td. " << endl;//
                cout << "\t\tJawaban \t: ";cin >> z;
                cout << "\t\tSisa \t\t: ";cin >> mod;
                if (z!=w*x/y || w*x%y!=mod){
                    cout << endl << "\t\t\tKamu Salah";
                    Sleep(900);
                }
                else {
                    cout << endl << "\t\t\tKamu Benar";
                    nilai++;
                    Sleep(900);
                }
                soal++;
                system ("cls");
                break;
            }
        }
    }
    cout << endl << endl << endl << endl;
    cout << "\t\t\tNilai = " << nilai*4;
    Sleep(1600);
}

//int gakepake (){
//  void Opsi_Jawaban(char i){//
//      int a,b,c,d;
//      switch(i){
//          case 'a': case 'A':
//              a+b+c=d;
//          case 'b': case 'B':
//              a+b+c=d;
//          case 'c': case 'C':
//              a+b+c=d;
//          case 'd': case 'D':
//              a+b+c=d;
//      }
//  }
//}

int main (){
    int opsi;
    do{
        system ("cls");
        Tampilan_Awal();
        cin >> opsi;
        switch(opsi){
            case 1: {
                system ("cls");
                Tampilan_Awal_Soal_1();
                Soal_Penjumlahan();
                break;
            }
            case 2: {
                system ("cls");
                Tampilan_Awal_Soal_1();
                Soal_Pengurangan();
                break;
            }
            case 3: {
                system ("cls");
                Tampilan_Awal_Soal_1();
                Soal_Perkalian();
                break;
            }
            case 4: {
                system ("cls");
                Tampilan_Awal_Soal_1();
                Soal_Pembagian();
                break;
            }
            case 5: {
                system ("cls");
                Tampilan_Awal_Soal_2();
                Soal_Campuran_1();
                break;
            }
            case 6: {
                system ("cls");
                Tampilan_Awal_Soal_2();
                Soal_Campuran_2();
                break;
            }
            case 7: {
                int tentukan;
                Tampilan_Exit();
                cout<< "\t\tPilih : "; cin>>tentukan;
                switch (tentukan){
                    case 1: {
                        return 0;
                    }
                    case 2: {
                        system("cls");
                        continue;
                    }
                    default : {
                        while (tentukan != 1 || tentukan != 2){
                            Tampilan_Exit();
                            cout<< "\t\tPilih : "; cin>>tentukan;
                            while (tentukan == 1 || tentukan != 2){
                                if (tentukan == 1){
                                    return 0;
                                }
                                break;
                            }
                            break;
                        }
                        continue;
                    }
                }
            }
        }
    } while (opsi != 1 || opsi !=2 || opsi !=3 || opsi != 4 || opsi != 5 || opsi != 6 || opsi != 7);
    return 0;
}