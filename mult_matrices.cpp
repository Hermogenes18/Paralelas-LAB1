#include <iostream>
#include <ctime>
using namespace std;

#define MAX 400

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

	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			C[i][j]=0;         
			for(int k=0; k<MAX; k++){
				C[i][j]= C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
}
