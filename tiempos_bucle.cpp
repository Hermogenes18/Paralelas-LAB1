#include <iostream>
#include <ctime>
using namespace std;

#define MAX 1000

static double diffclock(clock_t clock1,clock_t clock2)
{
    double diffticks=clock1-clock2;
    double diffms=(diffticks)/(CLOCKS_PER_SEC);
    return diffms;
}

int main()
{
    int t0, t1, t2, t3;

    double A[MAX][MAX], x[MAX], y[MAX];

    ///////////////////////////////////
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            A[i][j]=1;
            x[j]=1;
        }
    }
    //////////////////////////////////
    t0 = clock();

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            y[i] += A[i][j]*x[j];
        }
    }
    t1 = clock();

    double time = diffclock(t1,t0);
    cout <<  "Tiempo 1: " << time << endl;

    ///////////////////////////////////////

    t2 = clock();

    for (int j = 0; j < MAX; j++){
        for (int i = 0; i < MAX; i++){
            y[i] += A[i][j]*x[j];
        }
    }

    t3 = clock();

    double time2 = diffclock(t3,t2);
    cout << "Tiempo 2: " << time2 << endl;

    return 0;
}
