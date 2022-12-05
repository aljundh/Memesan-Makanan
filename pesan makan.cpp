#include <iostream>

using namespace std;

class Calculate {
    public:
        void calculate_price(int sum, int pay) {
            cout << "Total harga pesanan anda: " << sum << endl;
            cout << "Masukkan nominal pembayaran : ";
            cin >> pay;
            
            if (pay < sum) {
                cout << "Uang anda tidak cukup" << endl;
            } else {
                cout << "Kembalian: " << pay - sum << endl;
            }
        }
};

int main() {

    Calculate calculate;
    
    int id, sum, pay;
    char confirm;

    cout << "============================Menu============================" << endl;
    cout << "id                             id" << endl;
    cout << "1. Ayam Geprek Rp.15000        4. Jus Alpukat Rp.12000" << endl;
    cout << "2. Nasi Bakar  Rp.10000        5. Teh Tarik   Rp.10000" << endl;
    cout << "3. Mie Ayam    Rp.12000        6. Leci Tea    Rp.18000" << endl;
    cout << "============================================================" << endl;

    while (true) {
        cout << "Masukkan id makanan/minuman: ";
        cin >> id;
        cout << "Apakah ingin memesan kembali (y/n)? ";
        cin >> confirm;

        switch (id) {
            case 1:
                sum += 15000;
                break;
            case 2:
                sum += 10000;
                break;
            case 3:
                sum += 12000;
                break;
            case 4:
                sum += 12000;
                break;
            case 5:
                sum += 10000;
                break;
            case 6:
                sum += 18000;
                break;
            default:
                cerr << "Id yang anda masukkan salah" << endl;                        
        }

        if (confirm == 'n') {
            calculate.calculate_price(sum, pay);
            break;
        }
    }
}
