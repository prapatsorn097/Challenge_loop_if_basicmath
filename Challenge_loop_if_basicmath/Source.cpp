#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int i, j, n = 0, sum = 0, count = 0;
	float average, sd2;
	printf("Input 2 number : ");
	scanf("%d", &i);
	scanf("%d", &j);

	if (i > j) {
		for (i = i; i >= j; i--) {
			printf("%d", i);
			n = n + i;
			sum = sum + i * i;
			count++;
		}
		printf("\n");
	}
	else {
		for (i = i; i <= j; i++) {
			printf("%d", i);
			n = n + i;
			sum = sum + i * i;
			count++;
		}
	}
	printf("\n");
	average = (float)n / count;
	printf("Average = %.2f\n", average);
	sd2 = ((float)(count * sum) - (n * n)) / (count * (count - 1));
	sqrt(sd2);
	printf("%.2f", sqrt(sd2));

	return 0;
}