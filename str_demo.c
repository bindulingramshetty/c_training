#include <stdio.h>
#include <string.h>
void main()
{
    char name[10] = "chaithra";
    char new[100] = "hello";
    printf("%c\n", name[7]);
    printf("length of string is %d\n", strlen(name));
    // concatenation
    strcat(new, name); // new = hello+chaithra
    printf("%s", new);
    // search for a char in string!
    printf("%d", strstr(new, "how")); // null
}