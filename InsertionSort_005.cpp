#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray Tidak Boleh Lebih Dari 20\n";
        }
    }
    cout << endl;
    cout << "=============================================";
    cout << "==========Masukan Elemen Array==============";
    cout << "=============================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
