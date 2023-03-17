#include "main.h"

/**
 * string_nconcat - cocatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        int len, j;
        unsigned int i;
        char *p;

        len = 0;
        i = 0;
        j = 0;
        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        while (s1[len])
                len += 1;
        p = malloc(len + n + 1);
        if (p == NULL)
                return (NULL);
        while (s1[i])
        {
                p[i] = s1[i];
                i += 1;
        }
        while (j < n)
        {
                p[i + j] = s2[j++];
        }
        p[i + j] = '\0';
        return (p);
}