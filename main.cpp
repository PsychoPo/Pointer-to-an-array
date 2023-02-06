#include <stdio.h>
#include <windows.h>
//#include <time.h>
#define M 10

int main() {
	int i;
	long A[M];
	long* pA = A;
	//const int min = 1;
	//const int max = 1000;

	//srand((unsigned)time(0));

	for (int i = 0; i < M; i++) {
		*(pA + i) = rand() % 50; //(int)((double)rand() / (RAND_MAX + 1) * (max - min) + min);
	}

	for (i = 0; i < M; i++) {
		printf("Adress = %i ; A[i] = %i \n", &A[i], *(pA+i));
	}
}
