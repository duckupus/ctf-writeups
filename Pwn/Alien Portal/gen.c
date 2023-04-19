#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint32_t enckey(char *s) {
	int32_t len = strlen(s);
	int32_t val = 0;
	for(int i = 0; i < len; i++) {
		val += s[i];
	}
	return val*len;
}
static int inc_str(char *s, size_t len, char min, char max) { 
	size_t j = len;
	static int check = 0;
	if(s[len-1] == max) {
		for(j = len-1; j > 0 && s[j] == max; j--)
			s[j] = min;
		if(check && j == 0 && *s == max) {
			check = 0;
			return 1;
		}
		if(j == 0)
			check = 1;
		s[j]++;
	} else
		s[len-1]++;
	return 0;

}

int main() {
	char passw[15];
	for(int i = 0; i < sizeof(passw); i++) {
		passw[i] = 0;
	}
	uint32_t len = 1;
	uint32_t val = 0x70c;
	while(enckey(passw) != val) {
		if(inc_str(passw, len, 32, 125)) {
			len++;
		}
		if(len == 16)
			return 0;
	}
	for(int i = 0; i < len; i++) {
		printf("\\x%02x", passw[i]);
	}
	puts("");
	return 0;
}
