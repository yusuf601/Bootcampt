#include <iostream>
#include <vector>

/*
Buatlah program yang meminta pengguna memasukkan sebuah bilangan n, 
lalu program mencetak n bilangan Fibonacci.
Fibonacci adalah deret angka di mana setiap angka adalah jumlah 
dari dua angka sebelumnya. 
*/
// saya memakai deret fibonacci yang dimulai dari 0
void fibonacci(int& angka,std::vector<int>& deret){
    std::cout << "Masukkan angka ";
    std::cin >> angka;
    int fibo;
    for(int i = 0; i <= angka - 1;i++){
        if(i == 0){
            deret.push_back(i);
        }else if(i == 1){
            deret.push_back(i);
        }else if(i > 1){
            fibo = deret[i - 1] + deret[i - 2];
            deret.push_back(fibo);
        }
    }
    for(int i = 0; i <= deret.size() - 1;i++){
        std::cout << deret[i] << " ";
    }
}


int main(){
    int angka;
    std::vector<int> deret;
    int result;
    fibonacci(angka,deret);
    std::cin.get();
    return 0;
}
