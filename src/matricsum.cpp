#include "matric.hpp"
//This file calculates the sum of the parts above the diagonal through the "for" loop

int matricsumver(int arr[5][5]){           //this function counts  all sum numbers that up from diagonal

	int sumv = 0;
	for (int i = 0; i<5; i++ ){
		for (int j = i+1; j<5; j++ ){
			sumv += arr[i][j]; 
		}
	}
	return sumv;

}
int matricsumner(int arr[5][5]) {            //this function counts all sum numbers that down from diagonal

	int sumn = 0;
	for (int a = 0; a<5; a++ ){
		for (int b = a+1; b<5; b++ ){
			sumn += arr[b][a];
		}
	}
	return sumn;

}
