from Anggota import Anggota

list_anggota = []

n = 0
while n != 5:
    print("Pilih menu:")
    print("1. Tambah anggota")
    print("2. Hapus anggota")
    print("3. Edit anggota")
    print("4. Tampilkan anggota")
    print("5. Keluar")

    menu = int(input())

    if menu == 1:
        # Menambah anggota
        id = len(list_anggota) + 1
        name = input("masukkan nama yang ingin ditambahkan :")
        nama_bidang = input("masukkan nama bidang yang ingin ditambahkan :")
        nama_partai = input("masukkan nama partai yang ingin ditambahkan :")

        temp = Anggota(id, name, nama_bidang, nama_partai)
        list_anggota.append(temp)
    elif menu == 2:
        # Menghapus anggota
        id = int(input("Masukkan ID anggota yang ingin dihapus:"))
        found = False
        i = 0
        while i < len(list_anggota) and not found:
            anggota = list_anggota[i]
            if anggota.get_id() == id:
                del list_anggota[i]
                print("Anggota dengan ID " + str(id) + " telah dihapus.")
                found = True
            else:
                i += 1
        if not found:
            print("Id tidak ditemukan")
    elif menu == 3:
        # Mengedit anggota
        id = int(input("Masukkan ID anggota yang ingin diedit:"))
        found = False
        i = 0
        while i < len(list_anggota) and not found:
            anggota = list_anggota[i]
            if anggota.get_id() == id:
                anggota.set_nama(input("Masukkan nama baru:"))
                anggota.set_namaBidang(input("Masukkan bidang baru:"))
                anggota.set_namaPartai(input("Masukkan partai baru:"))
                found = True
            else:
                i += 1
        if not found:
            print("Id tidak ditemukan")
            
    elif menu == 4:
        # Menampilkan daftar anggota
        print("-" * 75)
        print("|%-10s|%-20s|%-20s|%-20s|" % ("ID", "Nama", "Bidang", "Partai"))
        print("-" * 75)
        for anggota in list_anggota:
            print("|%-10s|%-20s|%-20s|%-20s|" % (anggota.get_id(), anggota.get_nama(), anggota.get_namaBidang(), anggota.get_namaPartai()))
        print("-" * 75)
    elif menu == 5:
        n = 5
    else:
        print("Masukkan angka yang sesuai >:(")
