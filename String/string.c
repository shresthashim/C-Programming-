#include <stdio.h>
#include <string.h>

int main()
{
	char name[25];
	printf("Enter your name.\n");
	gets(name);

	printf("Hello %s", name);

	return 0;
}
