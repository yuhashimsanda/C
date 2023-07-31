#include <stdio.h>
#include <stdlib.h>
int main()
{
char letter;
printf("ASCII values A-Z: \n");
for(letter = 'A';letter<='Z'; ++letter)
{
printf("%c: %d \n", letter,letter);
}
return 0;
}
[Q10]
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,row=5;
for(i=1;i<=row;++i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
return 0;
}
