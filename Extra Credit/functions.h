#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_str_n_cat(char *destination, char *source);

int binary_search(int list[], int size, int target);

void bubble_sort(char* str[], int num);

int is_palindrome(char str[], int first, int length);

int sum_primes(int start, unsigned int n, int sum);

typedef struct occurences {

	int num_occurrences;
	double frequency;
}Occurrences;

void maximum_occurrrences(char* str[], Occurrences* count[], int* occurances, char* char_max);