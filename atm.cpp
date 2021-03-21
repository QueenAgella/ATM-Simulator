#include <iostream>

using namespace std;

float balance = 0;
int anotherTransaction;

void transaction() 
{
    int choice;
    cout << "\nATM SIMULATOR by Hervin FM\n" << endl;
    cout << "\nSilahkan Pilih Opsi!\n" << endl;
    cout << "1. Tarik Tunai" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Cek Saldo\n" << endl;
    cout << ">>";
    cin >> choice;
    int amountToWithDraw;
    int amountToDeposit;

    switch(choice)
    {
        case 1:
            // Tarik Tunai
            cout << "\nSilahkan Masukan Nominal Uang Yang Ingin Ditarik: ";
            cin >> amountToWithDraw;
            if (amountToWithDraw > balance)
            {
                cout << "Tidak Ada Saldo Yang Cukup Di Rekening Anda" << endl;
                cout << "Apakah Anda Ingin Bertransaksi Lainnya?\nTekan 1 Untuk Memproses Dan 2 Untuk Keluar" << endl;
                cout << ">>";
                cin >> anotherTransaction;
                if (anotherTransaction == 1)
                    transaction();
            }
            else
            {
                balance -= amountToWithDraw;
                cout << "Anda Sudah Menarik Uang Rp. " << amountToWithDraw << ".000 Dan Saldo Rekening Anda Rp. " << balance << ".000" << endl;
                cout << "Apakah Anda Ingin Bertransaksi Lainnya?\nTekan 1 Untuk Memproses Dan 2 Untuk Keluar \n" << endl;
                cout << ">>";
                cin >> anotherTransaction;
                if (anotherTransaction == 1)
                    transaction();
            }
            break;

        case 2:
            // Deposit
            cout << "\nMasukan Uang Yang Ingin Di Deposit: ";
            cin >> amountToDeposit;

            balance += amountToDeposit;

            cout << "Terima Kasih Sudah Mendeposit, Saldo Rekening Anda Rp. " << balance << ".000" << endl;
            cout << "Apakah Anda Ingin Bertransaksi Lainnya?\nTekan 1 Untuk Memproses Dan 2 Untuk Keluar \n" << endl;
            cout << ">>";
            cin >> anotherTransaction;
            if (anotherTransaction == 1)
                transaction();
            break;
        
        case 3:
            cout << "Saldo Rekening Anda : Rp.  " << balance << ".000" << endl;
            cout << "Apakah Anda Ingin Bertransaksi Lainnya?\nTekan 1 Untuk Memproses Dan 2 Untuk Keluar \n" << endl;
            cout << ">>";
            cin >> anotherTransaction;
            if (anotherTransaction == 1)
                transaction();
            break;
    }
}

int main()
{
    transaction();
    return 0;
}
