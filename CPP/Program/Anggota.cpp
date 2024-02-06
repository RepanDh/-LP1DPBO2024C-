//import library

#include <iostream>
#include <string>

//using standard namespace 
using namespace std;

//class declaration. for C++, the first letter doesnt have to be
//capitalized, but its better so we can distinguish it with the other types
class Anggota
{
    //private atribut
    private:
        int id;
        string name;
        string nama_bidang;
        string nama_partai;
    //public methods    
    public:
        //constructor//
        
        //contructor. take note that it doesnt have any return type
        Anggota()
        {
            //set name and gender to default value
            this->id = '0';
            this->name = "";
            this->nama_bidang = "";
            this->nama_partai = "";
        }

        //another contructor with parameter. this one will be called if the
        //object instanced with the given parameter
        Anggota(int id,string name, string nama_bidang, string nama_partai)
        {
            //"this" object's attributes will be set with the given parameter attributes
            this->id = id;
            this->name = name;
            this->nama_bidang = nama_bidang;
            this->nama_partai = nama_partai;
        }

        //getter and setter//

        //get id
        int get_id(){
            return this->id;
        }

        //set id
        void set_id(int id){
            this->id = id;
        }

        //get name
        string get_name(){
            return this->name;
        }

        //set name
        void set_name(string name){
            this->name = name;
        }

        //get nama_bidang
        string get_nama_bidang(){
            return this->nama_bidang;
        }

        //set nama_bidang
        void set_nama_bidang(string nama_bidang){
            this->nama_bidang = nama_bidang;
        }

        //get nama_partai
        string get_nama_partai(){
            return this->nama_partai;
        }

        //set nama_partai
        void set_nama_partai(string nama_partai){
            this->nama_partai = nama_partai;
        }


        //destructors//

        //default destructor. leave it blank for now
        ~Anggota(){
            
        }
};  

