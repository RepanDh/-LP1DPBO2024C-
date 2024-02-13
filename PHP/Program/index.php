<?php

require ('DaftarAnggota.php');

$daftarAnggota = new DaftarAnggota();

// Menambahkan beberapa anggota 
$daftarAnggota->tambahAnggota(new Anggota("1", "ujang", "Pangan", "Partai1", "elgatto.jpeg"));
$daftarAnggota->tambahAnggota(new Anggota("2", "Asep", "SDM", "Partai1", "elgatto.jpeg"));
$daftarAnggota->tambahAnggota(new Anggota("3", "Numa", "Kemanan", "Partai2", "elgatto.jpeg"));
$daftarAnggota->tambahAnggota(new Anggota("4", "Eve", "Sandang", "Partai2", "elgatto.jpeg"));

// Menampilkan daftar anggota 
$daftarAnggota->tampilkanDaftar();

// Mengubah data anggota dengan id 2
$daftarAnggota->ubahAnggota("2", new Anggota("2", "Asep Baru", "SDMMMM", "PartaiAAA", "elgatto.jpeg"));
echo "<br>" ;
echo "<br>" ;
echo "<br>" ;
// Menampilkan daftar anggota 
echo "<i>Data anggota dengan ID 2 berhasil diubah.</i><br>";
$daftarAnggota->tampilkanDaftar();

$daftarAnggota->hapusAnggota('4');
echo "<br>" ;
echo "<br>" ;
echo "<br>" ;
// Menampilkan daftar anggota 
echo "<i>Data anggota dengan ID 2 berhasil dihapus.</i><br>";
$daftarAnggota->tampilkanDaftar();

?>
