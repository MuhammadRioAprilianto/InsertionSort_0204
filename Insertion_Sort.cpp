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

void insertionSort()
{
    int temp; //membuat variable data temporer
    int j, i; //membuat variable j sebagai penanda

    for (int i = 1; i <= n - 1; i++)
    {// step 1
        temp = arr[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr [j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
        arr[j + 1] = temp; //step 5
    }
}

void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Total Pass =" << n - 1 << endl;
    cout << "================================" << endl;
    cout << "Element Array yan Telah Tersusun" << endl;
    cout << "================================" << endl;

    for (int j = 0; j < n; j++)
    { // looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main()
{
    input();
    insertionSort();
    display();
}