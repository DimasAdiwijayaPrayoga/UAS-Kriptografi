#include <iostream>
using namespace std;

string enkripsiDekripsi(string n_enkripsi) {
    char kunci = 'dimas'; //kunci enkripsi
    string output = n_enkripsi;

    for (int i = 0; i < n_enkripsi.size(); i++){
        output[i] = n_enkripsi[i] ^ kunci;
    }
    return output;
}

int main() {
    string plainteks = "Selamat dan Sukses Ujian Akhir Semester Gasal 2022-2023";
    string enkripsi = enkripsiDekripsi(plainteks);
    string dekripsi = enkripsiDekripsi(enkripsi);

    cout << "Plainteks  : " << plainteks <<endl;
    cout << "Enkripsi   : " << enkripsi <<endl;
    cout << "Dekripsi   : " << dekripsi <<endl;

    return 0;
}
