/*Print following patterns
 *
 * *
 * * *
 * * * *
 * * * * *
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 * * * * *
 * * * *
 * * *
 * *
 *
 5
 5 4
 5 4 3
 5 4 3 2
 5 4 3 2 1
 G
 E F G F E
 C D E F G F E D C
 A B C D E F G F E D C B A
 C D E F G F E D C
 E F G F E
 G
 A B C D
 B C D
 C D
 D
 A
 B C
 D E F
 G H I J
 */


#include <stdio.h>

int main() {
	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	for (i = 5; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	for (i = 5; i >= 1; i--) {
		for (j = 5; j >= 6 - i; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}


	char ch;

	// Top half
	for (i = 0; i < 3; i++) {
		ch = 'G' - i;
		for (j = 0; j < (2 * i + 1); j++) {
			printf("%c ", ch);
			if (j < i) ch++;
			else ch--;
		}
		printf("\n");
	}

	// Bottom half
	for (i = 1; i >= 0; i--) {
		ch = 'G' - i;
		for (j = 0; j < (2 * i + 1); j++) {
			printf("%c ", ch);
			if (j < i) ch++;
			else ch--;
		}
		printf("\n");
	}



	for (i = 0; i < 4; i++) {
		ch = 'A' + i;
		for (j = 0; j < (4 - i); j++) {
			printf("%c ", ch + j);
		}
		printf("\n");

		for (i = 0; i < 4; i++) {
			ch = 'A' + i;
			for (j = 0; j <= i; j++) {
				printf("%c ", ch + j * 2);
			}
			printf("\n");
		}
		}

		return 0;
	}



