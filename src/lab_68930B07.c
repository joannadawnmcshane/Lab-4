#include <stdio.h>
#include <string.h>
#include "get_line.h"
#include "essay.h"

#define MAXLEN 1000

const char ESSAY[] = "Ah Love! could you and I with Fate conspire \
To grasp this sorry Scheme of Things entire, \
Would not we shatter it to bits -- and then \
Re-mould it nearer to the Heart's Desire!";

int strindex(const char source[], char pattern[])
{
   if (pattern[0] == '\0') {
        return -1;
    }

    int rightmost_index = -1;
    char *p = strstr((char*)source, pattern);

    while (p != NULL) {
        rightmost_index = p - source;
        p = strstr(p + 1, pattern);
    }

    return rightmost_index;
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char pattern[MAXLEN] = "";

    printEssay(ESSAY);
    read_pattern_from_stdio( pattern, MAXLEN);
    int pos = strindex(ESSAY, pattern);
    printResult(ESSAY, pos);

    return 0;
}
#endif
// DO NOT change the code above

