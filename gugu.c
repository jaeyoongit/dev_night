#include <stdio.h>

void main() {
	int i = 1;

	while (i <= 9) {
		int j = 1;

		printf("%d단\n", i);

		while (j <= 9) {
			printf("%d X %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n\n");

		i++;
	}
}
