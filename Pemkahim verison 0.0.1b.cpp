#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    cout << "------APLIKASI PEMILIHAN KETUA HIMA------" << endl;
    cout << "--------------By Kelompok 7--------------" << endl;
    cout << "==============Version 0.0.1b=============" << endl;

    //Deskripsi NIM dan password
    int nim;
    string pass;

    //Pendaftaran akun
    cout << "\nSilahkan daftarkan akun anda terlebih dahulu" << endl;
    cout << "NIM      = "; 
    cin >> nim;
    cout << "Password = ";
    cin >> pass;
    system ("CLS");

    cout << "Selamat " << nim << " Anda berhasil Mendaftarkan akun" << endl;

    //Deskripsi input NIM dan input Password
    int in_nim;
    string in_pass;
    int i;

    masukan: {
    //Login
    for (i=1; i<=3; i++){
        //Deskripsi input
        int in_nim;
        string in_pass;

        
        cout << "\nSilahkan Login terlebih dahulu" << endl;
        cout << "Percobaan ke = " << i << endl;
        cout << "Masukan NIM      = ";
        cin >> in_nim;
        cout << "Masukan Password = ";
        cin >> in_pass;
        
        if (in_nim == nim && in_pass == pass){
            cout << "\nAnda berhasil login dengan NIM " << nim << "\n" << endl;
            break;
        } else if (in_nim != nim && in_pass == pass){
            cout << "NIM yang anda masukan tidak terdaftar.\n" << endl;
        } else if (in_nim == nim && in_pass != pass)
        {
            cout << "Password yang anda masukan salah.\n" << endl;
        } else{
            cout << "\nMaaf, NIM dan Password anda masukan salah.\n" << endl;
        }
    }
    }
        if(i > 3){
            cout << "Anda telah 3x memasukan Username & Password yang salah.\n" << endl;
            goto masukan;
        }else{
            system ("CLS");
            cout << "Selamat datang..\n" << endl;  
        }
    
    //Deskripsi calon ketua hima
    string cakahim[10] = {"Asep", "Ujang", "Sukijan"};

    //Calon-calon ketua Hima    
    cout << "---------DAFTAR CALON KETUA HIMA---------" << endl;
    cout << "=========================================" << endl;
    cout << "1. " << cakahim[0] << endl;
    cout << "2. " << cakahim[1] << endl;
    cout << "3. " << cakahim[2] << endl;
    cout << "-----------------------------------------" << endl;

    //Pemilihan calon ketua hima
    cout << "\nMasukan pilihan anda dengan angka" << endl;
   
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
            cout << "\nMaaf, Pilihan anda tidak ada.\n" << endl;
        }

        cout << "Anda sudah salah sebanyak " << i << "x\n" << endl;
    }
    
    cout << "---TERIMAKSIH TELAH IKUT BERKONTRIBUSI---" << endl;
    cout << "---DALAM PEMILIHAN KETUA HIMA TEKOM------" << endl;
    cout << "=========================================" << endl;
    
    cin.get();
    return 0;
}