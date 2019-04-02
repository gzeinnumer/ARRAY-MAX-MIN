/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : C(A+B)
*/

#include"stdio.h"
void main()
{
    int A[100],B[100],C[100];
    int i,n,maks,min;
    printf("Masukan Ukuran : ");scanf("%d",&n);
    printf("\nNilai A :\n");
    printf("Masukan Nilai A Ke-%d : ",1); scanf("%d",&A[0]);
    for(i=1; i<n; i++)
    {
        printf("Masukan Nilai A Ke-%d : ",i+1); scanf("%d",&A[i]);
    }
    maks = A[0];
    min = A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]>maks)
        {
            maks = A[i];
        }
        else if(A[i]<min)
        {
            min=A[i];
        }
    }
    printf("\nNilai Max adalah : %d",maks);
    printf("\nNilai Min adalah : %d",min);
}
