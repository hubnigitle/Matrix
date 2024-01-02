#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){

    int matriks3d_3[2][3][5];

    cout<<"\n\t          ---------- Program Penjumlahan Matriks 3D ----------\n\n";


    cout<< "Matriks A : \n\n";
    int matriks3d_1[2][3][5] =
    {
        {
            {11, 12, 13, 14, 15}, //baris 1
            {16, 17, 18, 19, 20}, //baris 2
            {21, 22, 23, 24, 25}  //baris 3
        },
        {
            {26, 27, 28, 29, 30}, //baris 1
            {31, 32, 33, 34, 35}, //baris 2
            {36, 37, 38, 39, 40}  //baris 3
        }
    };

    for( int x=0; x<2; x++){
        for( int y=0; y<3; y++){
            for( int z=0; z<5; z++){
                cout<<matriks3d_1[x][y][z]<<"  ";
            }cout<<endl;
        }cout<<endl;
    }cout<<endl;

    cout<<endl;

    cout<< "Matriks B : \n\n";
    int matriks3d_2[2][3][5] =
    {
        {
            {110, 120, 130, 140, 150}, //baris 1
            {160, 170, 180, 190, 200}, //baris 2
            {210, 220, 230, 240, 250}  //baris 3
        },
        {
            {260, 270, 280, 290, 300}, //baris 1
            {310, 320, 330, 340, 350}, //baris 2
            {360, 370, 380, 390, 400}  //baris 3
        }
    };

    for( int x=0; x<2; x++){
        for( int y=0; y<3; y++){
            for( int z=0; z<5; z++){
                cout<<matriks3d_2[x][y][z]<<"  ";
            }cout<<endl;
        }cout<<endl;
    }cout<<endl;

    cout<<"==========================================="<<endl;
    cout<<"\n\nHasil Penjumlahan Matriks A dan Matriks B : \n\n";

    for( int x=0; x<2; x++){
        for( int y=0; y<3; y++){
            for( int z=0; z<5; z++){
                matriks3d_3[x][y][z] = matriks3d_1[x][y][z] + matriks3d_2[x][y][z];
            }
        }
    };


    for( int x=0; x<2; x++){
        for( int y=0; y<3; y++){
            for( int z=0; z<5; z++){
                cout<<matriks3d_3[x][y][z]<<"   " ;
            }cout<<endl;
        }cout<<endl;
    }cout<<endl;

}
