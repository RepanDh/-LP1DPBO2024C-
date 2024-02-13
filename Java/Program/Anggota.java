

// class declaration. For Java, the first letter MUST BE capitalized.
public class Anggota{
    // Private attributes.
        private int id;
        private String name;
        private String nama_bidang;
        private String nama_partai;
        
    /* Constructors. */
    // Constructor. Take note that it doesn't have any return type.
    public Anggota(){
        this.id = '0';
        this.name = "";
        this.nama_bidang = "";
        this.nama_partai = "";
        
    }

    // Another constructor with parameter.
    public Anggota(int id, String name, String nama_bidang, String nama_partai){
        this.id = id;
        this.name = name;
        this.nama_bidang = nama_bidang;
        this.nama_partai = nama_partai;
    }
    /* Getter and Setter. */
    // Get gender.
    public int getId(){
        return this.id;
    }

    // Set gender.
    public void setId(int id){
        this.id = id;
    }

    // Get name.
    public String getName(){
        return this.name;
    }
    // Set name.
    public void setName(String name){
        this.name = name;
    }

    // Get name.
    public String getNamaBidang(){
        return this.nama_bidang;
    }
    // Set name.
    public void setNamaBidang(String nama_bidang){
        this.nama_bidang = nama_bidang;
    }

    // Get name.
    public String getNamaPartai(){
        return this.nama_partai;
    }
    // Set name.
    public void setNamaPartai(String nama_partai){
        this.nama_partai = nama_partai;
    }

}