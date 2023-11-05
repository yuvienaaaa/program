#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Zodiak(int tgl, int bln){
	
	char zodiak[50];

	if((tgl>=21 && bln==3) || (tgl<=19 && bln==4)){
		strcpy(zodiak, "Aries");
	}else if((tgl>=20 && bln==4) || (tgl<=20 && bln==5)){
		strcpy(zodiak, "Taurus");
	}else if((tgl>=21 && bln==5) || (tgl<=20 && bln==6)){
		strcpy(zodiak, "Gemini");
	}else if((tgl>=21 && bln==6) || (tgl<=22 && bln==7)){
		strcpy(zodiak, "Cancer");
	}else if((tgl>=23 && bln==7) || (tgl<=22 && bln==8)){
		strcpy(zodiak, "Leo");
	}else if((tgl>=23 && bln==8) || (tgl<=22 && bln==9)){
		strcpy(zodiak, "Virgo");
	}else if((tgl>=23 && bln==9) || (tgl<=22 && bln==10)){
		strcpy(zodiak, "Libra");
	}else if((tgl>=23 && bln==10) || (tgl<=21 && bln==11)){
		strcpy(zodiak, "Scorpio");
	}else if((tgl>=22 && bln==11) || (tgl<=21 && bln==12)){
		strcpy(zodiak, "Sagitarius");
	}else if((tgl>=22 && bln==12) || (tgl<=19 && bln==1)){
		strcpy(zodiak, "Capricorn");
	}else if((tgl>=20 && bln==1) || (tgl<=18 && bln==2)){
		strcpy(zodiak, "Aquarius");
	}else if((tgl>=19 && bln==2) || (tgl<=20 && bln==3)){
		strcpy(zodiak, "Pisces");
	}else{

	}

	printf("\n _________________________________\n");
	printf("|                         \n");
	printf("|Zodiak Anda adalah %s\n", zodiak);
	printf("|_________________________________\n\n");
}

int masukanTgl(){
    int tgl;
    char enter;

	scanf("%d%c", &tgl, &enter);
	if (enter!='\n'){
        getchar();
        printf("| Masukkan angka tanpa spasi : ");
        return masukanTgl();

    }else if(!(tgl>=1 && tgl<=31)){
		printf("| Tanggal tidak sesuai, coba lagi : ");
        return masukanTgl();

    }else{
        return tgl;
    }
}

int masukanPilih(){
    int pil;
    char enter;

	scanf("%d%c", &pil, &enter);
	if (enter!='\n'){
        getchar();
        printf("| Masukkan angka tanpa spasi : ");
        return masukanTgl();

    }else if(!(pil>=1 && pil<=2)){
		printf("| Input tidak sesuai, coba lagi : ");
        return masukanPilih();

    }else{
        return pil;
    }
}

int fungsibulan(int tgl){
	char bulan[20];
	int bln;

	do{
		
		printf("| Bulan (huruf) : ");
		scanf("%s", &bulan);
	
		printf("|_________________________________\n\n");

		if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"januari")==0){
   			bln=1;
		}else if ((tgl>=1 && tgl<=29) && strcmpi(bulan,"februari")==0){
    		bln=2;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"maret")==0){
    		bln=3;
		}else if ((tgl>=1 && tgl<=30) && strcmpi(bulan,"april")==0){
    		bln=4;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"mei")==0){
    		bln=5;
		}else if ((tgl>=1 && tgl<=30) && strcmpi(bulan,"juni")==0){
    		bln=6;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"juli")==0){
    		bln=7;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"agustus")==0){
   			bln=8;
		}else if ((tgl>=1 && tgl<=30) && strcmpi(bulan,"september")==0){
    		bln=9;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"oktober")==0){
    		bln=10;
		}else if ((tgl>=1 && tgl<=30) && strcmpi(bulan,"november")==0){
    		bln=11;
		}else if ((tgl>=1 && tgl<=31) && strcmpi(bulan,"desember")==0){
			bln=12;
		}
	}while(!(bln>=1 && bln<=12));

	return bln;
}

void profil(){
	printf("=====================================================\n");
	printf("|                PROGRAM MENCARI ZODIAK             |\n");
	printf("|                     KELOMPOK 06                   |\n");
	printf("=====================================================\n");

	printf("=====================================================\n");

}
void header(){
	printf("====================================================================\n");
	printf("=               PRAKTIKUM ALGORITMA DAN PEMROGRAMAN                =\n");
	printf("====================================================================\n");
	printf("=                           KELOMPOK 06                            =\n");
	printf("=               1. I Gede Sangga Buana Putra                       =\n");
	printf("=               2. I Putu Nanda Febian Danan Jaya                  =\n");
	printf("=               3. I Made Roby Dwimartha                           =\n");
	printf("=               4. Made Angga Danan Jaya                           =\n");
	printf("=               5. Diva                                            =\n");
	printf("=               6. Gus Restu                                       =\n");
	printf("====================================================================\n");
}
void header1(){
	printf("============================================\n");
	printf("=         Program Menentukan Zodiak        =\n");
	printf("============================================\n");
	}



int main(){

	int tanggal;
	char bulan[20];
	int zodiak, bln;
	int pilihan;
	int pilih;
		
		do {
		
		header();
		system("pause");
		
		system("cls");
		header1();
		system("pause");
		
		system("cls");
		printf("========================\n");
		printf("| 1. Menentukan Zodiak |\n");
		printf("| 2. Keluar            |\n");
		printf("========================\n\n");
		printf(" _______________________\n");
		printf("| Pilih       : ");
		pilih=masukanPilih();
		system("cls");
		
		switch(pilih){
			
			case 1 :
	
				do{
					profil();
			
					printf("\n========================\n");
					printf("|    Tanggal Lahir     |\n");
					printf("========================\n");
			
					printf(" _________________________________\n");
					printf("| Tanggal       : ");
			
					tanggal=masukanTgl();
			
					Zodiak(tanggal, fungsibulan(tanggal));
			
					do{
						printf("\nApakah Anda ingin mengulang program? (1 = Ya, 2 = Tidak) : ");
						getchar();
						scanf("%d", &pilihan);
					}while(pilihan != 1 && pilihan != 2);
					system("cls");
			
			
				}while(pilihan == 1);

				printf("=========================\n");
				printf("|      Terima kasih     |\n");
				printf("=========================\n\n");
				
				case 2 :
					
					system("cls");
					printf("=========================\n");
					printf("|      Terima kasih     |\n");
					printf("=========================\n\n");
					
					return 0;
				    
				default :
					system("cls");
					printf("Input salah, coba lagi.\n\n");
			}
	
		}
		
		while(pilih != 1 && pilih !=2);

	return 0;
}