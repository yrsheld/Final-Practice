#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000001
#pragma warning(disable:4996)
int count[MAX_SIZE];

int main(void)
{
	int t,a,b,n;
	count[0] = 0;
	for (int i = 1; i < MAX_SIZE; i++) {
		n = 0;
		int j = i;
		while (j > 0) {
			if (j % 10 == 1) {    
				n++;
			}
			j /= 10;
		}
		count[i] = count[i - 1] + n;
	}
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n",count[b] - count[a-1]);   
	}
}