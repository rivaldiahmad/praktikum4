# praktikum4


## latihan1 : Mencari angka terbesar dari sejumlah bilangan yang diinputkan


**Alur algoritma**

1. Mendeklarasikan `int n=0 int max=0
2. Membaca input dari keyboard `cin >> n`
3. Bandingkan `n > max` proses diulangi selama nilai n tiak berjumlah 0
4. Cetak max

**Flowchart program**
https://github.com/rivaldiahmad/praktikum4/blob/master/latihan1/flowchart1.jpg

**Pict program**
https://github.com/rivaldiahmad/praktikum4/blob/master/latihan1/latihan1.png

**Kode lengkap program**

```

#include <iostream>
using namespace std;

int main () {

    int n=0;
    int max=0;

    do {
       cout << "masukan bilangan ( masukan 0 untuk berhenti ) :" ;
       cin >> n;

    if ( n > max )
        max = n;

    } while ( n != 0 ) ;

    cout << "bilangan terbesar adalah " << max;



}
```

## Latihan 2: Program Struk Belanja Toko Marry

**Alur algoritma**
1. Deklarasikan variable `int N, a, b, d, e, hb, i, total, stotal dan float dis = 0.0`
2. Tampilkan pesan pembuka Selamat datang
3. Masukkan input dari user `cin >> N`
4. Masukkan input dari user `cin >> a >> b`
5. jumlahkan `hb = a * b;stotal = stotal+hb;e = e+a`
6. Cetak `cout << hb`
7. Tampilkan pesan urutan barang
8. Ulangi lagi dari langkah 4 sampai kondisi `i < N` bersifat **false**
9. Bila `stotal >= 1000000` hitung potongan harga Nx10% `dis=(stotal/100)*10` lalu kurangi harga stotal dengan potongan harga `total=stotal - dis` kemudian simpan persentase diskon `d = 10`
10. Bila `stotal > 500000` hitung potongan harga Nx5% `dis = (stotal/100)*5` lalu kurangi harga stotal dengan potongan harga `total=stotal - dis` kemudian simpan persentase diskon `d = 5`
11. Cetak `cout << N << e << stotal << d << total`
12. Tampilkan pesan penutup terima kasih

**Flowchart program**
https://github.com/rivaldiahmad/praktikum4/blob/master/latihan2/flowchart2.jpg

**Pict program**
https://github.com/rivaldiahmad/praktikum4/blob/master/latihan2/latihan2.png
https://github.com/rivaldiahmad/praktikum4/blob/master/latihan2/latihan2%20(2).png

**Kode lengkap program**
```
#include<iostream>
using namespace std;

int main(){

    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                   Selamat datang \n" ;
    cout << "                         di \n" ;
    cout << "                   Toko Marry" ;
    cout << " \n " ;
    cout << " \n " ;
    cout << "--------------------------------------------------------- \n" ;
    cout << "--------------------------------------------------------- \n" ;
    cout << " \n " ;
    cout << "Berapa macam barang yang akan Anda beli? \n" ;
    cin >> N;
    cout << " \n " ;

    do {
        cout << "Berapa barang yang akan Anda beli? \n" ;
        cin >> a;
        cout << " \n";
        cout << "Berapa harga per satuan barang yang Anda beli? \n";
        cin >> b;
        cout << " \n";

        hb = a * b;
        stotal = stotal+hb;
        e = e+a;
        i = i+1;

        cout << " \n";
        cout << "Harga barang tesebut adalah " << hb << " \n ";

        if (i < N) {
            cout  << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli \n" ;
        } else {
            cout << "Anda telah membeli " << N << " barang ";
        }

        cout << " \n";
        cout << " \n";

        } while (i < N) ;

        if (stotal >= 1000000) {
            dis = (stotal/100)*10;
            total = stotal-dis;
            d = 10;
        } else {
            if (stotal > 500000){
                dis = (stotal/100)*5;
                total = stotal-dis;
                d = 5;
            } else {
                total = stotal;
                d = 0;
            }

        }

        cout << "--------------------------------------------------------- \n" ;
        cout << "--------------------------------------------------------- \n" ;
        cout << " \n";

        cout << "Jumlah item: " << N << " \n" ;
        cout << "jumlah barang: " << e << " \n" ;
        cout << "Total belanja: " << stotal << " \n" ;
        cout << "Dicount: " << d << " % \n" ;
        cout << "Total: " << total << " \n" ;
        cout << " \n" ;
        cout << " \n" ;
        cout << "                               Terima kasih \n" ;
        cout << "                          Selamat datang kembali" ;
    }
```