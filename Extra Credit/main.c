/*
Programmer: Jake Mercure
Date: 5/8/2020

Project: PA 8 Extra credit



*/

#include "functions.h"

int main()
{
    char destination[100] = "Hello ", source[100] = "cpts121!",
        palindrome[100] = "taco cat", string[100] = "test string";

    int list[] = { 1,4,5,7,9,11,15,17,18,23 }, binary_result,
        palindrome_result, sum = 0, *occur;

    char* str[100] = { "jake", "alex", "amanda", "brian", "brianna" };

    Occurrences *count;

    char* char_max;


    
    // string concatination
    // parameters:  (destination string, string being added to destination);
    my_str_n_cat(destination, source);

    // binary search
    // parameters:  (list of integers, number of elements, target element)
    binary_result = binary_search(list, 10, 17);
    
    // bubble sort
    // parameters:  (array of pointers to strings, number of elements)
    bubble_sort(str, 5);

    // palindrome
    // parameters:  (string, beggining of string, end of string)
    palindrome_result = is_palindrome(palindrome, 0, strlen(palindrome) - 1);

    // sum of prime numbers
    // parameters:  (begginning number, end number, sum of primes between 2 - n)
    sum = sum_primes(2, 100, sum);

    // max occurances of a char
    // parameters:  (string, Occurances struct, count of occurances, mode character)
    maximum_occurrrences(string, &count, &occur, &char_max);


    // print statements
    printf("String concatonated: %s\n", destination);
    printf("%d is found at index %d\n", 17, binary_result);
    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }
    printf("Palindrome Result: %d\n", palindrome_result);
    printf("Sum of primes: %d\n", sum);
    printf("\"%s\", occurs %d times\n", string, occur);

    return 0;
}