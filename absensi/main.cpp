#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    char nama[5][50]={
        "Andis",
        "Indri",
        "Wiwi",
        "Rini",
        "Wawan"
    };
    char nim[5][50]={
        "17111066",
        "1231241",
        "12312312",
        "3121312",
        "124312412"
    };
    struct{
        char absensi[30][50];
    }kehadiran;
    int i,menu,pil,menuDet;
    
    printf("\n1. Absensi Mahasiswa");
    printf("\n2. Lihat Data Mahasiswa");
    printf("\nMenu : ");
    scanf("%d",&pil);
    if(pil == 1){
        printf("\n1.Jurusan TI");
        printf("\n2.Jurusan SI");
        printf("\nMenu Jurusan : ");
        scanf("%d",&menu);
    }else if(pil == 2){
        printf("\n1.Jurusan TI");
        printf("\n2.Jurusan SI");
        printf("\nMenu Jurusan : ");
        scanf("%d",&menuDet);
    }
    
    switch(menu) {
        case 1:
            for (i=0; i<5; i++){
                printf("\n NAMA : %s ",nama[i]);
                printf("\n NIM : %s ",nim[i]);
                printf("\n Hadir / Tidak ? : ");
                scanf("%s",&kehadiran.absensi[i]);
            }
            break;
        case 2:
            printf("Mahasiswa dengan Nama = Indri");
            break;
        default:
            break;
    }
    for (i=0; i<5; i++) {
        printf("\n NAMA : %s ",nama[i]);
        printf("\n NIM : %s ",nim[i]);
        printf("\n Kehadirannya : %s \n",kehadiran.absensi[i]);
        
    }
} //main







