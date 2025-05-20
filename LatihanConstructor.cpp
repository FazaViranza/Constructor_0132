#include <iostream>
#include <string>
using namespace std;

class Barang{
    
    private:
    int kodeBarang;
    string namaBarang;

    public:
    Barang(int a, string b);

    void cetak();
};

Barang::Barang(int a, string b)
{
    kodeBarang = a;
    namaBarang = b;
}

void Barang::cetak(){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang    : " << namaBarang << endl;
    cout << "Kode Barang    : " << kodeBarang << endl;
}

int main() {
    Barang brng (13265, "Keyboard");
    brng.cetak();
    return 0;
}