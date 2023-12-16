#include "functions.hpp"
#include <iostream>

namespace ag
{
    unsigned int strlen(char* str)
    {
        int len = 0;
        while (str[len] != '\0')
            len++;
        return len;
    }

    void strcat(char* dst, char* src)
    {
        int len_dst = strlen(dst);
        int len_src = strlen(src);

        for (int i = 0; i < len_src; i++)
            dst[len_dst + i] = src[i];

        dst[len_dst + len_src] = '\0';
    }

    void strcat(char* dst, char src)
    {
        int len_dst = strlen(dst);
        dst[len_dst] = src;
        dst[len_dst + 1] = '\0';
    }

    char tolower(char c)
    {
        if ('А' <= c && c <= 'Я')
            return c + 32;

        if (c == 'Ё')
            return 'ё';

        return c;
    }

    void tolower(char* str)
    {
        for (int i = 0; i < strlen(str); i++)
            str[i] = tolower(str[i]);
    }

    bool isLetter(char c)
    {
        c = tolower(c);

        if (('а' <= c && c <= 'я') || c == 'ё')
            return true;

        return false;
    }

    void SplitText(char text[1000], char words[500][50], int& n)
    {
        char word[50] = { 0 };
        int size = 0;


        char endLetter[2] = ".";
        strcat(text, endLetter);

        for (int i = 0; i < strlen(text); i++)
        {
            if (isLetter(text[i]))
            {
                word[size] = text[i];
                size++;
            }
            else
            {
                if (size == 0)
                    continue;

                word[size] = '\0';
                strcpy_s(words[n], word);
                n++;
                size = 0;
            }
        }
    }

    int NumOfIDLetters(char* str)
    {
        int sum = 0;
        for (int j = 0; j < strlen(str) - 1; j++)
        {
            int tmp = sum;
            for (int k = j + 1; k < strlen(str); k++)
                if (tolower(str[j]) == tolower(str[k]))
                    tmp++;
            if (tmp > sum)
                sum = tmp;
        }

        return sum;
    }

    bool IsPalindrome(char* str)
    {    
            if ((strlen(str) % 2) == 0)
            {
                for (int i = 0; i < (strlen(str) / 2); i++)
                    if (tolower(str[i]) != tolower(str[strlen(str) - 1 - i]))
                        return false;
            }
            else
            {
                for (int i = 0; i < ((strlen(str) - 1) / 2); i++)
                    if (tolower(str[i]) != tolower(str[strlen(str) - 1 - i]))
                        return false;
            }
            return true;
    }

    bool isVowel(char c)
    {
        c = tolower(c);
        char vowels[11] = { 'а', 'е', 'ё', 'и', 'у', 'ю', 'я', 'э', 'о', 'ы' };

        for (int i = 0; i < strlen(vowels); i++)
            if (c == vowels[i])
                return true;

        return false;
    }

    bool isConsonant(char c)
    {
        c = tolower(c);
        char consonat[22] = { 'б', 'в', 'г', 'д', 'ж', 'з', 'й', 'к', 'л', 'м', 'н','п', 'р','с','т','ф','х','ц','ч','ш','щ'};

        for (int i = 0; i < strlen(consonat); i++)
            if (c == consonat[i])
                return true;

        return false;
    }

    int numOfConsonant(char word[50])
    {
        int result = 0;

        for (int i = 0; i < strlen(word); i++)
            if (isConsonant(word[i]))
                result++;

        return result;
    }

    void duplicateVowels(char word[50])
    {
        for (int i = 0; i < strlen(word); i++)
        {
            if (ag::isVowel(word[i]))
            {
                for (int j = strlen(word) + 1; j >= i; j--)
                    word[j + 1] = word[j];
                i++;
            }
        }
    }

    bool IsMyLetters(char letters[], char c)
    {
        int n = 0;
        c = tolower(c);
        for (int i = 0; i < strlen(letters); i++)
            if (c == letters[i])
                n++;
        if(n >= 4)
            return true;
        else
            return false;
    }
}
