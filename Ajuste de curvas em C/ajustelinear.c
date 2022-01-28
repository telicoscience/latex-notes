#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "cc50.h"


int main(){
 double X[5] ={1.3, 3.4, 5.1, 6.8, 8.0} ; 
 double Y[5] = {2.0, 5.2, 3.8, 6.1, 5.8}; 
 double reta1[5]; 
 double reta2[5]; 
 double d1[5];
 double d2[5];  
 double D1 = 0;
 double D2 = 0;  
 double sx, sy, sxy, sx2, b0, b1; 
int i; 
int n = 5; 
	printf("\ni  X[i], Y[i]"); 
 for (i = 0; i < n; i ++ ){
 	reta1[i] = 0 + 1* X[i];
 	d1[i] = Y[i]- reta1[i];  
 	reta2[i] = 4.5 + 0*X[i];
 	d2[i] = Y[i]- reta2[i];  


 	printf("\n %i,  %.1f, %.1f",i + 1,  X[i], Y[i]); 
	printf("\n"); 
	
 }
 for (i = 0; i < n; i ++ ){
 	D1 += pow(d1[i], 2);
 	D2 += pow(d2[i], 2); 
 //	printf("\n%.2f, %2.f\n", D1, D2); 
 }
 //Implementa os somatórios 
 for (i = 0; i < n; i++){
 	 sx += X[i]; 
 	 sy +=Y[i]; 
 	 sxy +=X[i]*Y[i];
 	 sx2 +=pow(X[i], 2);   
 	//printf("sx = %.1f  sy = %.1f  sxy = %.1f sx2 = %.1f\n", sx, sy, sxy, sx2); 
 }
//Calcula os coeficientes da reta 
b1 = (n* sxy - sx*sy)/(n*sx2- pow(sx, 2));
b0 = (sy - sx*b1)/n; 
printf("\nY =  %.1f +  %.1fX\n ", b0, b1); 
return 0; 

}
