#include <stdio.h>

int main() {
	int arr[] = { 48, 39, 27, 36, 45, 69, 36, 78, 45, 30, 78, 81, 66, 69, 48, 75, 63, 69, 42, 78, 51, 27, 42, 81, 66, 81, 48, 72, 54, 69, 75, 27, 51, 81, 42, 81, 51, 30, 45, 81, 51, 27, 45, 81, 45, 39, 75, 30 };

	int v2[] = { 0, 1, 1, 0, 1, 2, 1, 1, 1, 3, 3, 3, 3, 1, 1, 0, 2, 1, 2, 3, 0, 2, 2, 2, 3, 2, 2, 0, 1, 1, 0, 1, 0, 2, 2, 2, 0, 3, 1, 3, 0, 2, 1, 3, 1, 1, 0, 1 };

	for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		arr[i] /= 3;
		arr[i] -= v2[i];
		arr[i] *= 4;
		arr[i] += v2[i];
		arr[i] += 20;
	}
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		putchar(arr[i]);
	}
	return 0;
}
