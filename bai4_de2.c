
#include <stdio.h>
// bai4 de 2 ~ NNP dz ~ DT070235
#include <math.h>
double power(int x, int n){
     double res = 1.0;
     for (int i = 1; i <= n; i++){
         res *= x;
     }
     return res;
 }
 
 void arrIp(int a[100], int n){
     for (int i = n; i >= 0; --i){
         printf("a_%d = ", i);
         scanf("%d", &a[i]);
     }
 }
 
 void arrOp(int a[100], int n){
     for (int i = n; i >= 0; --i){
         if (a[i] == 0){
            printf("");
         } else if (a[i] > 0){
             if ( i > 0){
                 printf("+ %d*x^%d ", a[i], i);
             } else {
                 printf("+ %d", a[i]);
             }
             
         } else {
             if ( i > 0){
                 printf("+ %d*x^%d ", -1 * a[i], i);
             } else {
                 printf("- %d",-1 * a[i]);
             }
         }
         
     }
     printf(" = 0\n");
 }
int main()
{
    int n, m, a[100], b[100];
    printf ("Nhap bac cao nhat cua P: ");
    scanf("%d", &n);
    printf("Nhap cac he so cua P:\n ");
    arrIp(a, n);
    printf ("Nhap bac cao nhat cua Q: ");
    scanf("%d", &m);
    printf("Nhap cac he so cua Q:\n ");
    arrIp(b, m);
    int x;
    printf("Nhap gia tri x = "); 
    scanf ("%d", &x);
    int P = 0, Q = 0;
    for (int i = n; i >= 0 ; --i){
        P += a[i]*power(x, i);
    }
    for (int i = m; i>= 0; --i){
        Q += b[i]*power(x , i);
    }
    printf("P: ");
    arrOp(a,n);
    printf("Q: ");
    arrOp(b, m);
    printf("Gia tri cua P: %d\n", P);
    printf("Gia tri cua Q: %d\n", Q);
    printf("Gia tri cua T = P - Q: %d\n", P - Q);
    return 0;
}