#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num;
	int denominator = 3;
	printf("Enter a candidate for primeness\n");
	fflush(stdout);
	scanf("%d", &num);

	if (num%2 == 0 && num != 2){
		printf("%d is not prime, it is divisible by 2", num);
		goto a;
	}
	if (num == 2){
		printf("2 is prime");
		goto a;
	}

	while (denominator < sqrt(num)){


			if(num%denominator == 0){

				printf("%d is not prime, it is divisible by %d\n", num, denominator);
				goto a;
			}
			denominator += 2;

	}
	printf("%d is prime", num);
	a:
	return EXIT_SUCCESS;
}
