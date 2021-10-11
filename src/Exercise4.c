/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int n1[n/2], n2[n/2];
	
	for(int i = 0; i < n; i++){
		if(i <= n/2 - 1) n1[i] = test_array[i];
		else n2[i - n/2] = test_array[i];
	}

	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(n1[i] > n1[j]){
				int temp = n1[i];
				n1[i] = n1[j];
				n1[j] = temp;
			}
		}
	}
	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(n2[i] < n2[j]){
				int temp = n2[i];
				n2[i] = n2[j];
				n2[j] = temp;
			}
		}
	}

	for(int i = 0; i < n; i++){
		if(i <= n/2 - 1) printf("%d ", n1[i]);
		else printf("%d ", n2[i - n/2]);
	}
	
	
	return 0;
}
