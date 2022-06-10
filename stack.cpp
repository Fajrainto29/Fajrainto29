#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 26

using namespace std;

struct Stack {
    int top; 
	int data[MAX];
} S;

void init() {
    S.top = -1;
}
bool isEmpty() {
    return S.top == -1;
}
bool isFull() {
    return S.top == MAX -1;
}

void push() {
    if (isFull()) {
        cout << "\nStack Telah Penuh" << endl;
    } else {
        S.top++;
        cout << "\nMasukkan data anda: ";
        cin >> S.data[S.top];
        cout << "\n Data : '" << S.data[S.top] <<endl; 
		cout << "Data  telah Ditambahkan"<< endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\nStack kosong!! " << endl;
    } else {
        cout << "\n Data :"<<S.data[S.top] <<endl;
        cout << "Data Berhasil Dihapus" << endl;
        S.top--;
    }
}

void printStack() {
    if (isEmpty()) {
        cout<< "\nStack Kosong\n";
    } else {
        cout << "Data dalam Stack : ";
        for (int i = S.top; i >= 0; i--)
            cout << S.data[i] <<  ( ",");
    }
}


int main() {
	int choose;
	do
	{
        cout << "\nNama : Muhammad Fajrianto" <<endl;
        cout << "NPM : G1A019037\n" <<endl;
        cout
        << "--------------STACK-------------\n"
        << "\n Masukkan Pilihan anda : \n"
        << " 1. Tambah Data  \n"
        << " 2. Hapus Data \n"
        << " 3. Lihat Data \n"
        << " 4. Keluar \n\n"
        << "----------------------------------\n"
        << "Anda memilih : ";
        cin >> choose;
        switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		}
	} while (choose !=4);
	return 0;
}