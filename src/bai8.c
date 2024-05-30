#include <stdio.h>
//cau8 ~ NNP dz ~ DT070235
double giai_thua (int n){
	double result = 1.0;
	for (int i = n; i >= 1; --i){
		result *= i;
	}
	return result;
}

int main (){
	int n;
	float s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		s+= 1/giai_thua(i);
	}
	printf("S = %f", s);
	return 0;
}