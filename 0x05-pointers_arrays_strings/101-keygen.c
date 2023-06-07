/*heading*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

int main(void/**
	      *
	      */)
{
srand(time(NULL));
char password[PASSWORD_LENGTH+1];
memset(password, 0, PASSWORD_LENGTH+1);
for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
int r = rand() % 62;
if (r < 10)
	{
password[i] = '0' + r;
}
	else if (r < 36)
	{
password[i] = 'A' + r - 10;
}
	else
{
password[i] = 'a' + r - 36;
}
}
printf("%s\n", password);
return (0);
}
