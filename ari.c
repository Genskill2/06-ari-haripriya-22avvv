#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string table[14] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade",
    "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College student", "Professor"};

string ari(string s) {
    int c = strlen(s);
    int characters = 0;
    int words = 0;
    int sentences = 0;
    for (int i=0;i<c;i++) {
        if (isalnum(s[i])) {
            characters +=1;
        }
        else if (s[i] == ' ') {
            words +=1;
        }
        else if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
            sentences +=1;
        }
    }
    float value = ((4.71*((float)characters/words)) + (0.5*((float)words/sentences)) - 21.43);
    int a = (int)value;
    int value2 = a +1;
    int score = value2 - 1;
    return table[score];
}
