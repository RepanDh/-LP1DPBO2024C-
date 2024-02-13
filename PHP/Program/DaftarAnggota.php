<?php
require ('Anggota.php');

class DaftarAnggota {
    private $daftar = array();

    function tambahAnggota($anggota) {
        array_push($this->daftar, $anggota);
    }

    function ubahAnggota($id, $anggotaBaru) {
        for ($i = 0; $i < count($this->daftar); $i++) {
            if ($this->daftar[$i]->get_id() == $id) {
                $this->daftar[$i] = $anggotaBaru;
                return;
            }
        }
    }

    function hapusAnggota($id) {
        for ($i = 0; $i < count($this->daftar); $i++) {
            if ($this->daftar[$i]->get_id() == $id) {
                array_splice($this->daftar, $i, 1);
                return;
            }
        }
    }

    function tampilkanDaftar() {
        echo "<table>";
        echo "<h4>Daftar Anggota DPR</h4>";
        echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto</th></tr>";
        foreach ($this->daftar as $anggota) {
            echo "<tr><td>{$anggota->get_id()}</td><td>{$anggota->get_nama()}</td><td>{$anggota->get_namaBidang()}</td><td>{$anggota->get_namaPartai()}</td><td><img src='{$anggota->get_fotoProfil()}' alt='Foto Profil' width='50' height='50'></td></tr>";
        }
        echo "</table>";
    }
}
?>
