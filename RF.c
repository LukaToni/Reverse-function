#include <stdio.h>
#include <string.h>


int main()
{
	char line[100];

	while(gets(line) != EOF)
    {
        reverse(line);
        printf("%s\n", line);
    }

	return 0;
}

int reverse(char string[])
{
  int len = strlen(string);
  int i;
  char tmp;
  for(i = 0; i < len / 2; i = i + 1)
  	{
  	tmp = string[i];
  	string[i] = string[len - i - 1];
  	string[len - i - 1] = tmp;
  	}
  return 0;
}
