#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int str_count(char* s)
{
    char* words[100];
    char* token;
    int count = 0;
    int char_count = 0;

    token = strtok(s, " ");

    while (token != NULL)
    {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; words[i][j] != '\0'; j++)
        {
            if (isupper(words[i][j]) || islower(words[i][j]))
                char_count++;
        }
    }

    return char_count;
}

int alpha_count_main()
{
    char c[100];

    printf("문자열을 입력하시오:");
    gets_s(c, 100);

    printf("알파벳 개수:%d", str_count(c));

    return 0;
}
