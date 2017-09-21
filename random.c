#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//seed the rand num gen
	srand(time(NULL));
	
	int random[10];
	
	int x;
	for (x = 0; x < sizeof(random)/sizeof(int) - 1; x++) {
		random[x] = rand();
	}
	
	random[9] = 0;
	
	for (x = 0; x < sizeof(random)/sizeof(int); x++) {
		printf("%d\n", random[x]);
	}
	
	int random2[10];
	int *p  = random+9;
	int *p2 = random2;
	
	while (p >= random) {
		*p2 = *p;
		p--;
		p2++;
	}
	
	for (x = 0; x < sizeof(random2)/sizeof(int); x++) {
		printf("%d\n", random2[x]);
	}
	
}

