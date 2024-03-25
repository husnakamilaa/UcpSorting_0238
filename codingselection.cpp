#include <iostream>
using namespace std;

int HUSNA[38];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 38)
            break;
        else {
            cout << "\nArray dapat mempunyai elemen maksimal 38.\n";

        }
    }
    cout << endl;
    cout << "========================" << endl;
    cout << "Masukkan elemen array : " << endl;
    cout << "========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> HUSNA[i];
    }
}

void selectionSort() { //membuat prosedur untuk mengurutkan array dengan metode selectionsort. jawaban no 2
    for (int i = 0; i <= n - 2; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (HUSNA[j] < HUSNA[min_index]) {
                min_index = j;
            }
        }
        int temp = HUSNA[i];
        HUSNA[i] = HUSNA[min_index];
        HUSNA[min_index] = temp;
    }   

}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << HUSNA[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl; //buat tau jumlah langkahnya //no3
    cout << endl;
}

int main()
{
    input();
    selectionSort();
    display();

    system("Pause");
    return 0;
}
