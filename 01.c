#include <stdio.h>
#include <stdlib.h>

int vowels(char input[])
{
	int cont = 0, i;

	for (i=0; input[i] != '\0'; i++){

		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'){

			cont++;
		}
	}

	return cont;
}

int main()
{
	char input[255];
	fgets(input, 255, stdin);

	printf("%d\n", vowels(input));

	return 0;
}
