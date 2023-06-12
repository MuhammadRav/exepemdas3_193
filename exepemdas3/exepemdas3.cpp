#include <iostream>
using namespace std; 

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar(){ //constructor
        x = 0;
    }
    virtual void input(){} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a){return 0;} //fungsi untuk menghitung luas     
    virtual float Keliling(int a){return 0;} //fungsi untuk menghitung keliling
    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
    /*lengkapi disini*/
    
public:
    int x;
    void input() {
        float a;
        cout << "\nLingkaran dibuat\n";
        cout << "Masukkan jejari: ";
        cin >> a;
    }
    float luas(float a) {
        return 3.14 * a * a;
        
    }
    float keliling(float a) {
        return 2 * 3.14 * a;
    }
    void setX(int a) {
      
    }
};


class Bujursangkar :public bidangDatar {
    /*lengkapi disini*/ 
public:
    int x;

    void input() {
        float a;
        cout << "\nBujursangkar dibuat\n";
        cout << "Masukkan sisi: ";
        cin >> a;
    }
    float luas(float a) {
        return a * a;
    }
    float keliling(float a) {
        return 4 * a;
    }
    void setX(int a) {
     
    }
};


int main() {
    /*lengkapi disini*/ 

    bidangDatar* obyek;
    Lingkaran a;
    Bujursangkar b;

    obyek = &a;
    obyek->input();
    obyek = &b;
    obyek->input();

}
