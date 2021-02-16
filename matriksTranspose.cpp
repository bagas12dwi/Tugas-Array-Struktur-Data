//Bagas Dwi Sulistyo
//NIM : 20051397076 
//2020B Manajemen Informatika
//Tugas Matriks Transpose

#include<iostream>

using namespace std;

int main(){
    int i, j, m, n;
    int matriks[3][3];
    int transpose[3][3];

    cout << "Masukkan nilai nilai matriks : \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> ("%d", matriks[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = matriks[i][j];
        }
        
    }

    cout << "Hasil Transpose : \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << ("%d ", transpose[i][j]) << " ";
        }
        cout << "\n";
        
    }
    
    return 0;
    
}