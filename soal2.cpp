#include <iostream>
/*
Buatlah program yang meminta pengguna memasukkan dua bilangan a dan b
lalu program menghitung dan menampilkan jumlah seluruh bilangan genap antara a dan b
 (termasuk a dan b jika genap).
*/

void Jumlah_genap(int& bilangan_awal,int& bilangan_akhir){
    int total_bilangan = 0;
    std::cout << "Masukkan bilangan awal: ";
    std::cin >> bilangan_awal;
    std::cout << "Masukkan bilangan akhir: ";
    std::cin >> bilangan_akhir;
    for(int i = bilangan_awal; i <= bilangan_akhir; i++){
        if(i % 2 == 0){
            total_bilangan += i;
        }
    }
    std::cout << "Total bilangan antara " << bilangan_awal << " dan " << bilangan_akhir << " adalah " << total_bilangan << std::endl;
}
int main(){
    int bilangan_awal,bilangan_akhir;
    Jumlah_genap(bilangan_awal,bilangan_akhir);
    std::cin.get();
    return 0;
}
