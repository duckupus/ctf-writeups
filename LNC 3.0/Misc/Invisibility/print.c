#include <stdio.h>

int main() {
	FILE *fp = fopen("./Invisibility.txt", "rb");
	char ch;
	while((ch = fgetc(fp)) 	!= EOF) {
		if(ch == ' ')
			putchar('.');
		else if(ch == '\t')
			putchar('_');
		else
			putchar(ch);
	}
	return 0;
}
