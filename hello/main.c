#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include <unistd.h>


#define p(...) printf(__VA_ARGS__)


int main(int argc, char *argv[])
{
	/* char s[] = "something"; */
	/* char *sp = s; */

	/* /\* printf("%c\n", s[3]); *\/ */
	/* /\* printf("%c\n", *(s+3)); *\/ */
	/* /\* p("-- %s\n", "another test"); *\/ */

	/* /\* char *c; *\/ */
	/* /\* while (*c != *"exit") { *\/ */
	/* /\* 	fgets(c, 100, stdin); *\/ */
	/* /\* 	fputs(c, stdout); *\/ */
	/* /\* } *\/ */

	/* char *a; */
	/* char *b; */
	/* while (1) { */
	/* 	printf("\n"); */
	/* 	scanf("%s %s", a, b); */
	/* 	/\* printf("a: %s, b: %s\n", a, b); *\/ */
	/* 	printf("---------\n%i\n", strcmp(a, b)); */
	/* } */

	/* printf("Running\n"); */

	int i = 0;

	while (i < 100) {
		usleep(3000);
	}

	return 0;
}
