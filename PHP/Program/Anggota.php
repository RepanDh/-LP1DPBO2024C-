<?php
class Anggota {
    private $id;
    private $nama;
    private $namaBidang;
    private $namaPartai;
    private $foto_profil;

    function __construct($id = '', $nama = "", $namaBidang = "", $namaPartai = "", $foto_profil = "") {
        $this->id = $id;
        $this->nama = $nama;
        $this->namaBidang = $namaBidang;
        $this->namaPartai = $namaPartai;
        $this->foto_profil = $foto_profil;
    }

    //getter and setter
    function get_id() {
        return $this->id;
    }

    function set_id($id) {
        $this->id = $id;
    }

    function get_nama() {
        return $this->nama;
    }

    function set_nama($nama) {
        $this->nama = $nama;
    }

    function get_namaBidang() {
        return $this->namaBidang;
    }

    function set_namaBidang($namaBidang) {
        $this->namaBidang = $namaBidang;
    }

    function get_namaPartai() {
        return $this->namaPartai;
    }

    function set_namaPartai($namaPartai) {
        $this->namaPartai = $namaPartai;
    }
    function get_fotoProfil() {
        return $this->foto_profil;
    }

    function set_fotoProfil($foto_profil) {
        $this->foto_profil = $foto_profil;
    }
}

?>