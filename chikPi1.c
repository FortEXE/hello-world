/*Saya M. Adnan Khairi AS.
 mengerjakan evaluasi TP ALPRO 4
 dalam mata kuliah Algoritma dan Pemrograman 1
 untuk keberkahanNya 
 maka saya tidak melakukan kecurangan 
 seperti yang telah dispesifikasikan. 
 Aamiin.*/

// program pengulangan, BIKIN TELUR SAMA ANAK AYAM chikPi1
#include <stdio.h> //LIBRARY NYA HARUS GINI SOALNYA YA BUAT NEMPELIN SCANF SAMA PRINTF

int main(){

	int i,j;	// i ITU BUAT VARIABEL BARIS, j ITU BUAT VARIABLE BANJAR, i DAN j ITU DUA-DUANYA VARIABEL COUNTER PENGULANGAN
	int n;		// n ITU VARIABEL MASUKAN KITA LAH :D


	scanf("%d", &n); // INPUT MASUKAN

	if (n == 1){ // INI CUMAN BUAT KITA YANG INPUT ANGKA SATU DOANG ALIAS KITA BIKIN TELUR PAKAI STATEMENT FOR

		for(i = 0; i < n; i++){                    // BARIS 1
			for(j = 0; j <= i; j++){
				printf(" ");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){                    // BARIS 2
			for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){                    // BARIS 3
			for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf(" ");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){                    // BARIS 4
			for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf(" ");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){                    // BARIS 5
			for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){                    // BARIS 6
			for(j = 0; j <= i; j++){
				printf(" ");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}for(j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");	 // <-------  ini teh buat bikin barisan baru lah, masa gk tau wkwkwkwkwk
		}


	}else{	// KALAU MISALKAN GK INPUT NO 1 PASTI YANG KELUAR ANAK AYAM LAH XDDDDDDDD

		for(i = 0; i < n; i++){				
			for(j = 0; j < n; j++){
				printf(" ");
			}for(j = n; j > i+1; j--){
				printf(" ");
			}for(j = 0; j < 2*n+4; j++){
				printf("*");
			}for(j = 0; j < i; j++){
				printf("*");
			}for(j = 0; j < i+2; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf(" ");
			}for(j = 0; j < n; j++){
				printf("*");
			}for(j = 0; j < n; j++){
				printf(" ");
			}for(j = 0; j < n; j++){
				printf("*");
			}for(j = 0; j < n+4; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){
			for(j = n; j > i+1; j--){
				printf(" ");
			}for(j = 0; j < i+1; j++){
				printf("*");
			}for(j = 0; j < n; j++){
				printf("*");
			}for(j = 0; j < n; j++){
				printf(" ");
			}for(j = 0; j < n; j++){
				printf("*");
			}for(j = 0; j < n+4; j++){
				printf("*");
			}
			printf("\n");
		}for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf(" ");
			}for(j = 0; j < i+1; j++){
				printf(" ");
			}for(j = n; j > i+1; j--){
				printf("*");
			}for(j = 0; j < n-1; j++){
				printf("*");
			}for(j = 0; j < n+5; j++){
				printf("*");
			}for(j = n; j > i; j--){
				printf("*");
			}for(j = 0; j < i; j++){
				printf(" ");
			}for(j = 0; j < i+2; j++){
				printf("*");
			}

			printf("\n");

		}for(i=1; i<=n; i++){
		
			for (j = n; j > i ; j--){
				printf(" ");
			}for (j = 0; j < i + 1 ; j++){
				printf(" ");
			}for (j = n; j > i ; j--){
				printf(" ");
			}for (j = 0; j < i -1 ; j++){
				printf("*");
			}for (j = 0; j < i ; j++){
				printf("*");
			}for (j = n; j > i ; j--){
				printf(" ");
			}for (j = -3; j < i  ; j++){
				printf(" ");
			}for (j = n; j > i ; j--){
				printf(" ");
			}for (j = n; j > i ; j--){
				printf(" ");
			}for (j = 0; j < i ; j++){
				printf("*");
			}for (j = 0; j < i -1 ; j++){
				printf("*");
			}
			printf("\n");
			
	}										// 	//  //	  //  	   //  //      //		//
												//	////   	  //////   /////       //	  //
	}											//	//  //    //       // //       //	  //
												//	//	//	  //////   //  //      //	   //
												//________________________________________//	

	return 0;	// <------------ JANGAN LUPA TANDA RETURN NANTI KALAU KETINGGALAN CSPC NYA NANTI JADI WA LAGI

}