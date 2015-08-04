#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *msg=NULL;
	if (argc < 2) {
		msg=strdup("Loading");
	}
	if (argc > 1) {
		msg=argv[1];
	}

	int repeats=80;
	for (;repeats>0;repeats--){

		system("clear");
		printf("%s [           ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [#          ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [##         ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [###        ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [ ###       ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [  ###      ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [   ###     ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [    ###    ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [     ###   ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [      ###  ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [       ### ]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [        ###]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [         ##]\n", msg);
		system("sleep .1");

		system("clear");
		printf("%s [          #]\n", msg);
		system("sleep .1");
		}

	system("clear");
	printf("You will never get your time back!\n");
	return 0;
}
