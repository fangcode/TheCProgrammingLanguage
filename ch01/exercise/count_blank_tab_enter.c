#include <stdio.h>

main()
{
    int blank_count, tab_count, enter_count, c;
    blank_count = 0;
    tab_count = 0;
    enter_count = 0;

    while ((c = getchar()) != EOF){
        putchar(c);
        if (c == '\n')
            ++enter_count;
        if (c == '\t')
            ++tab_count;
        if (c == '\b')
            ++blank_count;
    }
    printf("blank : %d, tab : %d, enter : %d", blank_count, tab_count, enter_count);
}
