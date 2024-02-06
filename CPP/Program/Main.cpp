//import library
#include <bits/stdc++.h>
#include "DaftarAnggota.cpp"

//using standard namespace 
using namespace std;

int main() {
    DaftarAnggota daftar;

    // Menambahkan anggota baru
    Anggota anggota1(1, "Udin", "Bidang Pangan", "Partai A");
    daftar.tambahAnggota(anggota1);

    Anggota anggota2(2, "Cecep", "Bidang Sumber Daya", "Partai B");
    daftar.tambahAnggota(anggota2);

    // Mengubah data anggota
    Anggota anggotaBaru(1, "Udin Saprudin", "Bidang Anggaran", "Partai P");
    daftar.ubahAnggota(1, anggotaBaru);

    // Menghapus anggota
    daftar.hapusAnggota(2);

    // Menampilkan daftar anggota
    for (Anggota anggota : daftar.getListAnggota()) {
        cout << "ID: " << anggota.get_id() << endl;
        cout << "Nama: " << anggota.get_name() << endl;
        cout << "Bidang: " << anggota.get_nama_bidang() << endl;
        cout << "Partai: " << anggota.get_nama_partai() << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}
