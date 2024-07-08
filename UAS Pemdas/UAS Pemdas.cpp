#include <iostream>
using namespace std;

class MasukUniversitas {
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:

    MasukUniversitas() {
        uangPendaftaran = 100000;
        uangSemesterPertama = 30000000;
        uangBangunan = 15000000;
        totalBiaya = 45100000;
    }

    virtual void namaJalurMasuk() {
        return;
    }

    virtual void  hitungTotalBiaya() {
        return;
    }

    virtual void  tampilkanTotalBiaya() {
        return;
    }

    virtual void Input() {
        return;
    }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = 100000;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = 30000000;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = 15000000;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = 45100000;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    float getUangSemesterPertama(){
        return uangSemesterPertama;
    }
    float getUangBangunan() {
        return uangBangunan;
    }

    float getTotalBiaya(){
        return totalBiaya;
    }

};

class SNBT : public MasukUniversitas {
public:
    void uangPendaftaran() {
        cout << "Uang pendaftaran" << endl;
    }

    void  uangSemesterPertama(){
        cout << "uang semester pertama" << endl;
    }

    void uangBangunan() {
        cout << "uang bangunan" << endl;
    }

    void totalBiaya() {
        cout << "total biaya" << endl;
    }
};

class SNBP : public MasukUniversitas {
    void uangPendaftaran() {
        cout << "Uang pendaftaran" << endl;
    }

    void  uangSemesterPertama() {
        cout << "uang semester pertama" << endl;
    }

    void totalBiaya() {
        cout << "total biaya" << endl;
    }
};


int main() {
    SNBT* snbt;
    SNBP* snbp;
    int choice = 0;

    while (choice != 4) {
        cout << "1. SNBT\n";
        cout << "2. SNBP\n";
        cout << "3. Keluar\n";
        cin >> choice;
    

    switch (choice) {
    case '1': {

    }

    int totalbiaya, uangpendaftaran, uangsemesterpertama, uangbangunan;

    string kategori;
    string rekomendasi;

    totalbiaya = uangpendaftaran + uangsemesterpertama + uangbangunan;


    if (uangsemesterpertama < 9000000) {
        kategori = "Mahal";
        rekomendasi = "Tidak Direkomendasikan";
    }

    else if (uangsemesterpertama > 30000000) {
        kategori = " Sedang";
        rekomendasi = "Dipertimbangkan";
    }

    else {
        kategori = "Murah";
        rekomendasi = "direkomendasikan";
    }
    
    cout << "Uang Pendaftaran : " << uangpendaftaran << endl;
    cout << "Uang semester pertama : " << uangsemesterpertama << endl;
    cout << "Uang Bangunan : " << uangbangunan << endl;
    cout << "Kategori Adalah :" << kategori << endl;
    cout << "reomendasi Adalah :" << rekomendasi << endl;

    int totalbiaya, uangpendaftaran, uangsemesterpertama;
    string kategori;
    string rekomendasi;

    totalbiaya = uangpendaftaran + uangsemesterpertama;


}