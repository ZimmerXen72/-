#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_strcat(char *s1, const char *s2)
{
    const size_t a = strlen(s1);
    const size_t b = strlen(s2);
    const size_t size_ab = a + b + 1;
    s1 = realloc(s1, size_ab);
    memcpy(s1 + a, s2, b + 1);
    return s1;
}
char *s1[];
char *s2[];
int main()
{
    scanf("%s %s",s1,s2);
    strcat(s1,s2);
    printf("%s\n", s1);
    if (strncmp (s1, s2,3)==0)
        printf("they are identical\n");
    else
        printf("they are not identical\n");
    int length=strlen(s1);
    printf("%d\n",length);
    char *p;
    for ( p = s1; *p; ++p )
        if ( strchr(s2, *p) )
            printf("it is here - %c\n", *p);
}
