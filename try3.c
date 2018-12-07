#include <stdio.h>



int main(){
	int arr[13];
	int a, b, c, d, e, f, g;
	
	arr[13]=23; //a
	arr[12]=19; //b
	arr[11]=12;  //c
	arr[10]=2;  //d
	arr[7]=3;  //e
	arr[6]=1;  //f
	arr[8]=0;  //g
	
	arr[10]=arr[10]*arr[13];
	arr[8]=arr[10];
	
	arr[7]=arr[7]*arr[12];
	arr[8]=arr[7];
	
	arr[6]=arr[6]*arr[11];
	arr[8]=arr[6];
	
}
