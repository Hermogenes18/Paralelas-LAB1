#include <iostream>

using namespace std;

#define MAX 200
 
void Multiplicacion(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX])
{   

    int blockSize=MAX/4;  
    
    for(int bi=0; bi<MAX; bi+=blockSize)
        for(int bj=0; bj<MAX; bj+=blockSize)
            for(int bk=0; bk<MAX; bk+=blockSize)
                for(int i=0; i<blockSize; i++)
                    for(int j=0; j<blockSize; j++)
                        for(int k=0; k<blockSize; k++)
                            c[bi+i][bj+j] += a[bi+i][bk+k]*b[bk+k][bj+j];

}
 
int main()
{
    int t0, t1, t2, t3;

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], D[MAX][MAX];

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            A[i][j]=2;
            B[i][j]=3;
        }
    }

    ////////////////////////////////////////////////77

    Multiplicacion(A,B,C);
}
