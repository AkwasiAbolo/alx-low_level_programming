#include<stdio.h>

int main(void)

{
	char s[] = "putchar";
	int a;

	a = 0;

	while (a <= 7)

	{
		putchar(s[a]);
		a++;
	}

	putchar('\n');
	return (0);

}
