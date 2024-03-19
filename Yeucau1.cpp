#include <stdio.h>
#include <conio.h>

void printMultiplesOf7() {
	int i;
	for (i = 10; i <= 99; i++) {
		if (i % 7 == 0) {
			printf("%d ", i);
		}
	}
}

int main() {
	printMultiplesOf7();
	getchar();
	return 0;
	
}