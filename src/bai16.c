#include <stdio.h>
//bai16 ~ NNP dz ~ DT070235
int main (){
	int n , m ,p;
	printf("nhap cac he so n m p (trong do n la so hang cua A, m la so cot cua A va cung la so hang cua B, p la so cot cua B): ");
	scanf ("%d%d%d", &n , &m , &p );
	int a[n][m], b[m][p], c[n][p];
	printf ("Nhap ma tran A_%dx%d:\n", n , m);
	for (int i = 0; i< n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf ("Nhap ma tran B_%dx%d:\n", m , p);
	for (int i = 0; i< m; i++){
		for (int j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
				c[i][j] = 0;
				for (int k = 0; k < m; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
		}
	}
	printf ("Nhap ma tran tich cua A va B la C_%dx%d:\n", n , p);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			printf("%d ", c[i][j]);
		}
		putchar('\n');
	}
	return 0;
}