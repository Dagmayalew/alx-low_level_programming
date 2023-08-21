
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main() {
	const char* chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int num_chars = 62;
	char password[9] = {0};

	srand(time(0)); // seed random number generator with current time

	for (int i = 0; i < 8; i++) {
		int rand_index = rand() % num_chars;
		password[i] = chars[rand_index];
	}

	printf("Generated password: %s\n", password);

	return 0;
}
