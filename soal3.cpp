#include <iostream>
#include <cmath>
/*
Buatlah program yang meminta pengguna memasukkan sebuah bilangan n,
lalu mencetak pola segitiga angka menurun dengan n baris.
*/
int Bilangan_Awal(int jumlah_baris);
struct data
{
    int Bilangan;
};

void BilanganAwal(int& jumlah_baris,data& angka){
    int Bil = 0;
    for(int i = 0; i <= jumlah_baris - 1;i++){
        Bil = (Bil * 10 ) + i + 1;
    }
    // std::cout << "Hasil: " << digit << std::endl;
    angka.Bilangan = Bil;
    // std::cout << "Hasil: " << Bil << std::endl;
    // std::cout << "Hasil: " << angka.Bilangan << std::endl;
}

void Triangle(int& jumlah_baris,data& angka){
    int reversed = 0;
    for(int i = 0; i < jumlah_baris;i++){
        reversed = angka.Bilangan / pow(10,i);
        std::cout << "Hasil: " << reversed << "\n";
    }
}

int main(){
    data angka;
    int jumlah_baris;
    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlah_baris;
    int result;
    BilanganAwal(jumlah_baris,angka);
    Triangle(jumlah_baris,angka);
    std::cin.get();
    return 0;
}

