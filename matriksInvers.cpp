//Bagas Dwi Sulistyo
//NIM : 20051397076 
//2020B Manajemen Informatika
//Tugas Matriks Invers

#include <iostream>

using namespace std;

int main(){
    double matriks[2][2];
    int i, j;
    double det;

    cout << "Masukkan nilai nilai matriks : \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> ("%d", matriks[i][j]);
        }
    }

    cout<<"Matriks A = "<<"\n";
        for(i=0;i<2;i++) {
            for(j=0;j<2;j++)
            {
            cout<<matriks[i][j]<<" " ;
            }
            cout<<"\n";
        }

    cout<<"\n";
    det=matriks[0][0]*matriks[1][1]-matriks[1][0]*matriks[0][1];
    cout<<"determinan A = ";
    cout<<det;
    cout<<"\n";
    double A2[2][2];
    A2[1][1]=matriks[0][0];
    A2[0][0]=matriks[1][1];
    A2[0][1]=matriks[0][1]*-1;
    A2[1][0]=matriks[1][0]*-1;
    cout<<"Invers A = "<<"\n";
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            cout<<A2[i][j]/det<<" ";
        }
        cout<<"\n";
    }
    
}