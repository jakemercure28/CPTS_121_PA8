#include "functions.h"

void my_str_n_cat(char* destination, char* source) {


    while (*destination != '\0') {

        destination++;
    }

    while (*source != '\0') {

        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int binary_search(int list[], int size, int target) {

    int left = 0, right = size-1, found = 0, target_index = -1, mid,i=0;

    while (!found) {

        mid = (left + right) / 2;

        if (target == list[mid]) {
            found = 1;
            target_index = mid;

        } else if (target < list[mid]){
            right = mid - 1;
        } else if (target > list[mid]) {
            left = mid + 1;
        }
    }
    return target_index;
}

void bubble_sort(char* str[], int num) {
    /*
    
    I read the PA8 guidelines and thought a while loop would work
    best. I now think a for loop would work better.
    
    */

    
  
    int u = 0, c = 0, i = 0;
    char* temp = NULL;

    // 'u' set to end of list
    u = num - 1;

    // while unsorted section has more than 1 element
    for (; i < u; i++) {

        // set c back to zero
        for (c = 0; c < num - i - 1; c++) {

            // compare ascii codes of first letter in string
            if (*str[c] > * str[c + 1]) {

                // swap
                temp = str[c];
                str[c] = str[c + 1];
                str[c + 1] = temp;
            }
        }
    }
}

int is_palindrome(char str[], int first, int length) {

    int result = 1;
  
    // ignores spaces in the palindrome string
    if (str[length] == ' ') {
        while (str[length] == ' ') {
                str[length] = str[length - 1];
        }
    }
    else if (str[first] == ' ') {
        while (str[first] == ' ') {
            str[first] = str[first + 1];
        }
    }

        // not a palindrome
    if (str[first++] != str[length--]) {

        // breaks the recursion and returns 0
        first += length;
        result = 0;
    }

    if (first < length) {
        result = is_palindrome(str, first, length);
    }
        return result;
}

int sum_primes(int start, unsigned int n, int sum) {

    int flag = 0;
    
    // non prime
    for (int i = 2; i <= start / 2; i++) {
        
        if ((start % 2) == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    sum += start;

    start++;

    if (start != n) {
        sum = sum_primes(start, n, sum);
    }

    // returning a false value.
    // I believe there is an error in the recurrsion.
    return sum;
}

void maximum_occurrrences(char* str[], Occurrences* count[], int* occurances, char* char_max) {

    int i = 0;
    Occurrences *current;
    

    while (str[i] != NULL) {
        
        // define occurances

        
        current = count[i];
        
        current->num_occurrences;
        

    }

   

}