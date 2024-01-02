#include<iostream>
#include<string.h>

using namespace std;

int main(){
    struct bio {
        char nama[30], cita2[20], nim[12];
    };

    bio temanku[4] ;

    strcpy(temanku[1].nama,"Mauleni Risqi Handayani");
    strcpy(temanku[1].nim, "2310511085");
    strcpy(temanku[1].cita2,"Programmer");

    strcpy(temanku[2].nama,"Juan Carlo Binsar Pattymahu");
    strcpy(temanku[2].nim, "2310511087");
    strcpy(temanku[2].cita2,"Programmer");

    strcpy(temanku[3].nama,"Egi Fadhilah");
    strcpy(temanku[3].nim, "2310511104");
    strcpy(temanku[3].cita2,"Game Developer");

    strcpy(temanku[4].nama,"Milly Pangestu");
    strcpy(temanku[4].nim, "2310511118");
    strcpy(temanku[4].cita2,"Polisi");


        cout<<"\n\n        Nama Projek : Aplikasi Belajar Anak-Anak\n\n";


        cout <<"\n\tNama\t\t : "<< temanku[1].nama ;
        cout <<"\n\tNIM\t\t : "<< temanku[1].nim ;
        cout <<"\n\tCita-cita\t : "<< temanku[1].cita2<<endl ;

        cout <<"\n\tNama\t\t : "<< temanku[2].nama ;
        cout <<"\n\tNIM\t\t : "<< temanku[2].nim ;
        cout <<"\n\tCita-cita\t : "<< temanku[2].cita2<<endl ;

        cout <<"\n\tNama\t\t : "<< temanku[3].nama ;
        cout <<"\n\tNIM\t\t : "<< temanku[3].nim ;
        cout <<"\n\tCita-cita\t : "<< temanku[3].cita2<<endl ;

        cout <<"\n\tNama\t\t : "<< temanku[4].nama ;
        cout <<"\n\tNIM\t\t : "<< temanku[4].nim ;
        cout <<"\n\tCita-cita\t : "<< temanku[4].cita2<<endl<<endl ;



}
