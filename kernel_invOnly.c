/*	
	Projet module AOA - IATIC 4 - 2017 -
	Kernel pour le sujet 8
	Groupe : Marina BLE - Doha ROUIBAA - Pablo BOURDELAS - Guillaume RYCKAERT
	Encadrant : Youenn LEBRAS
*/


#include "vegamissil.h"
//#include ""

void kernel (int n, float a[n], int32_t ind[n] ,float b[n] ,float (*c)[n]){
	int i,j;
	
	float divTmp;

	for (i=0;i<n;i++){

		divTmp = 1.0f / b[i];

		for(j=0;j<n;j++){
			c[i][j]= a[ind[j]] * divTmp;
		}   
	}
	
}

/*
//		- Original Kernel implementation -

void kernel (int n, float a[n], int32_t ind[n] ,float b[n] ,float (*c)[n]){
	int i,j;

	for (j=0;j<n;j++){	
		for(i=0;i<n;i++){
			c[i][j]= a[ind[j]] / b[i];
		}   
	}
}
*/
