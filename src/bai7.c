#include <stdio.h>
//cau 7 ~ NNP dz ~ DT070235
double power(int x, int n){
	double result = 1.0;
	for (int i = 1; i <= n; i++){
		result *= x;
	}
	return result;
}

double giai_thua (int n){
	double result = 1.0;
	for (int i = n; i >= 1; --i){
		result *= i;
	}
	return result;
}

int main (){
	int x, n = 1;
	printf("Nhap x trong e^x: ");
	scanf("%d", &x);
	double e = 1.0, z;
	do {
		z = power(x, n) / giai_thua(n);
		e += z;
		n++;
	} while (z >= 0.00001);
	printf ("e^%d = %f", x, e);
	return 0;
}