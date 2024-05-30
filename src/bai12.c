#include <stdio.h>
//bai12 ~ NNP dz ~ DT070235
int main  (){
	int n;
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	int a[n], b[n], c[2*n];
	printf("Nhap phan tu cua day a: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Nhap phan tu cua day b: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	int cntA = 0, cntB = 0, cntC = 0;
	if (cntA < n && cntB < n){
		if (a[cntA] <= b[cntB]){
			c[cntC] = a[cntA];
			++cntA;
		} else {
			c[cntC] = b[cntB];
			++cntB;
		}
		++cntC;
	}
	while (cntA < n) {
        c[cntC] = a[cntA];
        cntA++;
        cntC++;
    }

    while (cntB < n) {
        c[cntC] = b[cntB];
        cntB++;
        cntC++;
    }
	for (int i = 0; i < 2*n; i++){
		printf("%d ", c[i]);
	}
	return 0;
}