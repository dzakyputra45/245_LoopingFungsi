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










int main()
{
    std::cout << "Hello World!\n";
}

