#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * Description: concatenates src to end of dest
 * Return: pointer to dest
 **/



char *_strcat(char *dest, char *src) {
    char *result = dest; 

    
    while (*dest != '\0') {
        dest++;
    }

    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    
    *dest = '\0';

    return result;
}

int main() {
    char s1[50] = "Hello";
    char s2[50] = "World!";

    
    _strcat(s1, s2);

    printf("%s\n", s1);

    return 0;
}

