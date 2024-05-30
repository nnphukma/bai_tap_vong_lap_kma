#include <stdio.h>
#include <math.h>
//cau3 de2 ~ NNP dz ~ DT070235
void arrIp(int a[100], int n){
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int isPrime(int n){
	if (n < 2){
		return 0;
	} else if (n == 2){
		return 1;
	} else  {
		for (int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int main () {
	int n, a[100];
	printf("nhap so phan tu cua day so: ");
	scanf("%d", &n);
	arrIp(a, n);
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (isPrime(a[i])){
			++cnt;
		}
	}
	printf("day so co %d so nguyen to",cnt);
	return 0;
}