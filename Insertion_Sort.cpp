#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; //membuat variable input n

void input()
{//membuat prosedur input
    while (true)
    {
        cout <<"masukkan jumlah data pada array : "; //membuat input jumlah element array
        cin >> n; //memanggil variable input n

        if (n <= 20)
        {//membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; //pesan peringatan jika data yang dimasukkan lebih dari 20
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)//membuat perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i]; //menyimpan nilai data n ke dalam array
    }
}

