#include <stdio.h>
int main(void)
{char str1[50] = "Hello, ";
char str2[] = "world!";
_strcat(str1, str2);
printf("%s\n", str1);
(return 0);
}
