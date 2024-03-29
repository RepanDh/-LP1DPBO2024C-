//import library
#include <bits/stdc++.h>
#include "Anggota.cpp"

//using standard namespace 
using namespace std;

//class declaration
class DaftarAnggota
{
    //private atribut
    private:
        list<Anggota> listAnggota;
    
    //public methods
    public:
        //constructor

        DaftarAnggota(){

        }

        // method to get the list Anggota
        list<Anggota> getListAnggota() {
            return listAnggota;
        }

        //set
        void setListAnggota(list<Anggota> listBaru) {
            this->listAnggota = listBaru;
        }


        // method to add an Anggota to the list
        void tambahAnggota(Anggota anggota) {

            //untuk mengecek jika id sudah ada, disini id nya unique
             for (Anggota a : listAnggota) {
                if (a.get_id() == anggota.get_id()) {
                    cout << "ID " << anggota.get_id() << " sudah ada dalam daftar. " << anggota.get_name() << " dari bidang " << anggota.get_nama_bidang() << ", partai " << anggota.get_nama_partai() << " tidak bisa ditambahkan" << "\n\n";
                    return;
                }
            }
            listAnggota.push_back(anggota);
        }

        // method to remove an Anggota from the list by id
        void hapusAnggota(int id) {
            auto it = listAnggota.begin();
            while (it != listAnggota.end()) {
                if (it->get_id() == id) {
                    it = listAnggota.erase(it);
                } else {
                    ++it;
                }
            }
        }

        // method to update an Anggota in the list
        void ubahAnggota(int id, Anggota anggotaBaru) {
            auto it = listAnggota.begin();
            bool found = false;
            while (it != listAnggota.end() && !found) {
                if (it->get_id() == id) {
                    *it = anggotaBaru;
                    found = true;
                }
                if (!found) {
                    ++it;
                }
            }
        }

};