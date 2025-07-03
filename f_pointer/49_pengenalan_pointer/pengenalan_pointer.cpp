/*
Terdapat Dua Simbol :
* dan &
~ Masing-masing memiliki 2 role, Jadi Penggunaannya Tergantung Konteks

? * : 1. Pointer (Menyimpan Alamat Dari Pengambil Alamat [&a])           ==> Contoh : int *b = &a
?     2. De-referensi (Pengambil Nilai [dari pointer itu yang ditunjuk]) ==> Contoh : cout << *b << endl;

! & : 1. Referensi               ==> Contoh : int &ref = a
!     2. Pengambil Alamat        ==> Contoh : cout << &b << endl;

*Penjelasan Lengkap :
    * Sebagai Pointer => * dapat dijadikan sebagai Pointer (PENUNJUK), ketika deklarasi/inisialisasi varaibel
    ^Contoh : int *b = &a, Pointer Itu adalah penunjuk yang menyimpan Nilai Berupa ALAMAT
    ^                      Dari Sebuah Variabel. *b = &a, 'b' menyimpan ALAMAT dari 'a'

    * Sebagai De-referensi => * dapat dijadikan sebagai Dereferensi (Pengambil Nilai), Ketika terdapat 'cout'
    ^Contoh : 
    ^ int a = 10;
    ^ int *b = &a;
    ^ cout << *b, 'b' akan mengambil Nilai yang DITUNJUK [pointer b] sebelumnya, yaitu nilai dari alamat di 'a'
    ^ cout << b, sedangkan ini 'b' akan menampilkan Alamat dari 'a'

    & Sebagai Referensi => & dapat menjadi referensi (ALIAS), ketika deklarasi/inisialisasi variabel
    ^Contoh : 
    ^ int d = 12;
    ^ int &kucing = d, 'kucing' akan menjadi referesni(alias) dari 'a', dimana mereka akan saling terikat
    ^                   Maksudnya, jika salah satu nilai diganti, maka nilai lainnya akan terganti juga
    ^ kucing = 24;
    ^ cout << a << endl;        => a      = 24
    ^ cout << kucing << endl;   => kucing = 24

    & Sebagai Pengambil Alamat => & dapat menjadi pengambil alamat, ketika cout
    ^Contoh :
    ^ int d = 12;
    ^ cout << &d << endl;  , akan menampilkan alamat 'd', contohnya 0X700
    ^ int e;
    ^ cout << e << endl;   , juga akan menampilkan alamat dari 'e' walau valuenya kosong.
*/