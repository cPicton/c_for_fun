#include <stdio.h>
#include <string.h>

int main(void)
{
char str1[12] = "Chris";
char str2[12] = "picton";
int len;
strcat(str1, str2);

printf("%s\n",str1);

len = strlen(str1);

printf("%d\n",len);

return 0;
}
