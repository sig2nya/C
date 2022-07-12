#include<stdio.h>

int main() {
	// 1. Hello, World!
	printf("Hello, World!\n");

	// 2. 서식 지정자
	printf("%s\n", "Hello, World!");
	printf("%s %s\n", "Hello", "1234");
	printf("%s %s\n", "Hello,", "1234");
	printf("%s, %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello,", "1234");
	printf("%s%s\n", "Hello", "1234");

	return 0;
}