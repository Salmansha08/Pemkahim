#include <iostream> //cin, cout, endl.
#include <string> //length, 
#include <windows.h> //system,
#include <sstream> //mengkonversi string ke int
using namespace std;

int main(){
    awal : 
    cout << "------APLIKASI PEMILIHAN KETUA HIMA------" << endl;
    cout << "--------------By Kelompok 7--------------" << endl;
    cout << "==============Version 0.0.2b=============" << endl;
    
    daftar :
    //Deskripsi NIM dan password
    int nim_i;
    string pass;
    int charpass;
    int charnim;

    //1. Pendaftaran akun
    
    cout << "\nSilahkan daftarkan akun anda terlebih dahulu" << endl;    
    cout << "-----------------------------------------" << endl;
    cout << "NIM Harus berupa angka 7 Digit" << endl;
    cout << "Password min 6 digit dan max 12 Digit" << endl;
    cout << "-----------------------------------------" << endl;
    
    cout << "NIM      = "; //ada bug kalo masukin nim bukan int
    cin >> nim_i;

    //konversi nim jadi string
    string nim_s;
    ostringstream convert;
    convert << nim_i;
    nim_s = convert.str();

    charnim = nim_s.length(); //cek panjang nim

    cout << "Password = ";
    cin >> pass;

    charpass = pass.length(); //cek panjang pass
    cout << charpass << endl;
    cout << "=========================================" << endl;

    //syarat NIM harus berupa angka 7 digit
    if (charnim != 7){
        system("CLS");
        system("Color 04"); //biar text peringatan nya warna merah
        cout << "NIM Harus berupa angka 7 Digit" << endl;
        system("PAUSE");
        system("Color 07"); //biar putih lagi
        goto daftar;
    } else{
        cout << "NIM memenuhi syarat" << endl;
    }
    
    //syarat pass password minimal 6 digit maximal 12 digit
    if (charpass < 6 || charpass > 12){
        system("CLS");
        system("Color 03"); //biar text peringatan nya warna aqua
        cout << "Password minimal 6 digit dan maximal 12 digit" << endl;
        system("PAUSE");
        system("Color 07"); //biar putih lagi
        goto daftar;
    } else{
        cout << "Passwword memenuhi syarat" << endl;
    }

    //apabila NIM dan password memenuhi syarat
    if (charnim = 7 && charpass >= 6 && charpass <= 12){
        cout << "-----------------------------------------" << endl;
        cout << "Selamat " << nim_i << " Anda berhasil Mendaftarkan akun" << endl;
        system("Color 02"); //warna hijau
        system("PAUSE");
        system("Color 07");
    } else{
        goto daftar;
    }    
    
    //Deskripsi input NIM dan input Password
    int in_nim;
    string in_pass;
    int i;
    
    //2. Login
    for (i=1; i<=3; i++){
        //Deskripsi input
        int in_nim;
        string in_pass;

        cout << "\nSilahkan Login terlebih dahulu" << endl;
        cout << "Percobaan ke = " << i << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Masukan NIM      = ";
        cin >> in_nim;
        cout << "Masukan Password = ";
        cin >> in_pass;

        if (in_nim == nim_i && in_pass == pass){
            system ("CLS");
            cout << "============================================" << endl;
            cout << "\nAnda berhasil login dengan NIM " << nim_i << "" << endl;
            cout << "============================================" << endl;
            break;
        } else if (in_nim != nim_i && in_pass == pass){
            system ("CLS");
            cout << "============================================" << endl;
            cout << "NIM yang anda masukan tidak terdaftar." << endl;
            cout << "============================================" << endl;
        } else if (in_nim == nim_i && in_pass != pass)
        {
            system ("CLS");
            cout << "============================================" << endl;
            cout << "Password yang anda masukan salah." << endl;
            cout << "============================================" << endl;
        } else{
            system ("CLS");
            cout << "============================================" << endl;
            cout << "\nMaaf, NIM dan Password anda masukan salah." << endl;
            cout << "============================================" << endl;
        }
    }
    
        if(i > 3){
            cout << "Anda telah 3x memasukan NIM & Password yang salah.\n Silahkan masukan NIM & Password yang benar.\n" << endl;
            goto awal;
        }else{
            system ("CLS");
            cout << "Selamat datang..\n" << endl;  
        }
    // 3. Pemilihan
    //Deskripsi calon ketua hima
    string cakahim[3] = {"Asep", "Ujang", "Sukijan"};

    //Calon-calon ketua Hima    
    cout << "---------DAFTAR CALON KETUA HIMA---------" << endl;
    cout << "=========================================" << endl;
    cout << "1. " << cakahim[0] << endl;
    cout << "2. " << cakahim[1] << endl;
    cout << "3. " << cakahim[2] << endl;
    cout << "-----------------------------------------" << endl;

    //Pemilihan calon ketua hima
    cout << "\nMasukan pilihan anda dengan angka 1-3" << endl;
   
    //Deskripsi pilihan
    int pil;
    
    //yang dipilih
    for (i = 1; i >= 1; i++){
        cout << "Pilihan anda = ";
        cin >> pil;
        system ("CLS");

        if (pil == 1){
            cout << "\nAnda telah memilih " << cakahim[0] << " untuk menjadi ketua Hima.\n" << endl;
            break;
        } else if (pil == 2){
            cout << "\nAnda telah memilih " << cakahim[1] << " untuk menjadi ketua Hima.\n" << endl;
            break;
        } else if (pil == 3){
            cout << "\nAnda telah memilih " << cakahim[2] << " untuk menjadi ketua Hima.\n" << endl;
            break;
        } else{
            cout << "\nMaaf, Pilihan anda tidak ada. Silahkan Masukan angka 1-3.\n" << endl;
        }

        cout << "Anda sudah salah sebanyak " << i << "x\n" << endl;
    }
    
    cout << "---TERIMAKSIH TELAH IKUT BERKONTRIBUSI---" << endl;
    cout << "---DALAM PEMILIHAN KETUA HIMA TEKKOM-----" << endl;
    cout << "=========================================" << endl;
     
    cin.get();
    return 0;
}

//1. Penjelasan Library (Fasya)
//2. Pendaftaran Akun (Salman)
//3. Login (Satria)
//4. Pemilihan (Nazzar)