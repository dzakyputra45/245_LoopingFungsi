#include <iostream>
using namespace std;

int main()
{
    int i;
    string nama[5];

    for (i = 7; i > 0; i--)
    {
        cout << i << "." << "My Name JACK" << endl;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "Masukkan Nama =";
        cin >> nama[i];
    }

    cout << endl;
    cout << "-------------" << endl;
    cout << "Kumpulan Nama-Nama" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Namanya adalah" << nama[i] << endl;

    }

}

#include <iostream>
using namespace std;

int main() {

    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    while (bilangan % 2)
    {
        cout << "Bilangan " << bilangan << "adalah Ganjil" << endl;
        bilangan = rand() % 10;
    }
    cout << "Bilangan" << bilangan << "adalah Genap" << endl;
}

#include <iostream>
using namespace std;

int main() {

    string pilihan;
    do
    {
        cout << "makan" << endl;
        cout << "main game" << endl;
        cout << "Ibadah" << endl;

        cout << "Apakah anda masih hidup? (Yes/No)";
        cin >> pilihan;

    } while (pilihan == "Yes");

}

#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350, hCompass = 150;

void input() {
    cout << "masukan jumlah Adidas = ";
    cin >> nAdidas;
    cout << "masukan jumlah Puma = ";
    cin >> nPuma;
    cout << "masukan jumlah New Balance = ";
    cin >> nNB;
    cout << "masukan jumlah Compass = ";
    cin >> nCompass;
    cout << "masukan jumlah Nike = ";
    cin >> nNike;
}

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nCompass * hCompass) + (nNike * hNike);
}

void Display() {

    cout << endl;
    cout << "==============" << endl;
    cout << "Jumlah Puma = " << nPuma << endl;
    cout << "Jumlah Adidas = " << nAdidas << endl;
    cout << "Jumlah NB = " << nNB << endl;
    cout << "Jumlah Compass = " << nCompass << endl;
    cout << "Jumlah Nike = " << nNike << endl;
    cout << endl;
    cout << "Total Harga = Rp." << totalHarga() << endl;
}

int main() {

}










int main()
{
    std::cout << "Hello World!\n";
}

