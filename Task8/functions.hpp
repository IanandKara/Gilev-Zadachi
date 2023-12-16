#pragma once

namespace ag
{
    unsigned int strlen(char* str);
    void strcat(char* dst, char* src);
    void strcat(char* dst, char src);
    char tolower(char c);
    void tolower(char* str);
    bool isLetter(char c);
    void SplitText(char text[1000], char words[500][50], int& n);
    int NumOfIDLetters(char* str);
    bool IsPalindrome(char* str);
    bool isVowel(char c);
    bool isConsonant(char c);
    int numOfConsonant(char word[50]);
    void duplicateVowels(char word[50]);
    bool IsMyLetters(char letters[], char c);
}
