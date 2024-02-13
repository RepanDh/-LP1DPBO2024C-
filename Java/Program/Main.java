import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Anggota> list = new ArrayList<>();

      
        int n = 0;
        Scanner sc = new Scanner(System.in);

        while (n != 5) {
            System.out.println("Pilih menu:");
            System.out.println("1. Tambah anggota");
            System.out.println("2. Hapus anggota");
            System.out.println("3. Edit anggota");
            System.out.println("4. Tampilkan anggota");
            System.out.println("5. Keluar");

            int menu = sc.nextInt();

            if (menu == 1) {
                // Menambah anggota
                int id = list.size() + 1; 
                System.out.println("masukkan nama yang ingin ditambahkan :");
                String name = sc.next();
                System.out.println("masukkan nama bidang yang ingin ditambahkan :");
                String nama_bidang = sc.next();
                System.out.println("masukkan nama partai yang ingin ditambahkan :");
                String nama_partai = sc.next();

                Anggota temp = new Anggota(id, name, nama_bidang, nama_partai);
                list.add(temp);
            } else if (menu == 2) {
                // Menghapus anggota
                System.out.println("Masukkan ID anggota yang ingin dihapus:");
                int id = sc.nextInt();
                boolean found = false;
                int i = 0;
                while (i < list.size() && !found) {
                    Anggota anggota = list.get(i);
                    if (anggota.getId() == id) {
                        list.remove(anggota);
                        System.out.println("Anggota dengan ID " + id + " telah dihapus.");
                        found = true;
                    }
                    i++;
                }
                if (!found) {
                    System.out.println("Id tidak ditemukan");
                }

            } else if (menu == 3) {
                // Mengedit anggota
                System.out.println("Masukkan ID anggota yang ingin diedit:");
                int id = sc.nextInt();
                boolean found = false;
                int i = 0;
                while (i < list.size() && !found) {
                    Anggota anggota = list.get(i);
                    if (anggota.getId() == id) {
                        System.out.println("Masukkan nama baru:");
                        anggota.setName(sc.next());
                        System.out.println("Masukkan bidang baru:");
                        anggota.setNamaBidang(sc.next());
                        System.out.println("Masukkan partai baru:");
                        anggota.setNamaPartai(sc.next());
                        found = true;
                    }
                    i++;
                }
                if (!found) {
                    System.out.println("Id tidak ditemukan");
                }
            } else if (menu == 4) {
                // Menampilkan daftar anggota
                System.out.println("-".repeat(75));
                System.out.printf("|%-10s|%-20s|%-20s|%-20s|\n", "ID", "Nama", "Bidang", "Partai");
                System.out.println("-".repeat(75));
                for (Anggota anggota : list) {
                    System.out.printf("|%-10s|%-20s|%-20s|%-20s|\n", anggota.getId(), anggota.getName(), anggota.getNamaBidang(), anggota.getNamaPartai());
                }
                System.out.println("-".repeat(75));
         
            } else if (menu == 5) {//out
                n = 5;
            }
            else {//jika user ngeyel
                System.out.println("Masukkan angka yang sesuai >:(");
            }
        }
    }
}