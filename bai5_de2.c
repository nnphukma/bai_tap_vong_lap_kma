#include <stdio.h>
// bai5 de 2 ~ NNP dz ~ DT070235
#include <math.h>
 
void arrIp(int a[100][100], int n, int m){
	for (int i = 0 ; i < n; i++){
		for(int j = 0; j <m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void arrOp(int a[100][100], int n, int m){
	for (int i = 0 ; i < n; i++){
		for(int j = 0; j <m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void arrPro(int a[100][100],int b[100][100], int res[100][100], int m, int n, int p){
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			int z =0;
			for (int k = 0; k < n; k++){
				z += a[i][k] * b[k][j];
			}
			res[i][j] = z;
		}
	}
}
int main (){
	int a[100][100], b[100][100], res[100][100], n,m,p;
	printf("Nhapn so hang cua ma tran A_mxn: m = ");
	scanf("%d", &m);
	printf("Nhapn so cot cua ma tran A_mxn: n = ");
	scanf("%d", &n);
	printf("Nhapn so hang cua ma tran B_nxp: p = ");
	scanf("%d", &p);
	printf("Nhap ma tran A_%dx%d\n", m, n);
	arrIp(a,m,n);
	printf("Nhap ma tran B_%dx%d\n", n, p);
	arrIp(b,n,p);
	arrPro(a, b, res, m,n,p);
	printf("ma tran A\n");
	arrOp(a, m ,n);
	printf("ma tran B\n");
	arrOp(b,n,p);
	printf("Ma tran Tich cua AxB la\n");
	arrOp(res, m, p);
	return 0;
}