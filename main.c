#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}

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
