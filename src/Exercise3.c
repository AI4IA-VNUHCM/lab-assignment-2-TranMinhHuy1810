/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int a=0;
	int i;
	for(int i=2;i*i<=testcase;i++){
		while(testcase%i==0){
			if(a)printf(" * ");
			a=1;
			printf("%d",i);
			testcase/=i;
		}
	}
	if(testcase!=1){
		if (a) printf(" * ");
		printf("%d",testcase);	
	}
	
	return 0;
}