#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 4996 )


int fun(int n) {
	int result = 0, f1 = 1, f2 = 1;
	if (n <= 0)	return 0;
	if (n == 1 || n==2)	return 1;

	for (int i = 3; i <= n; i++) {
		result = f1 + f2;
		f1 = f2;
		f2 = result;
	}
	return result;
}

int main(void) {
	printf("%d", fun(3));
	return 0;
	Teat Feature ttest222
		dfsgdsfgfd
}