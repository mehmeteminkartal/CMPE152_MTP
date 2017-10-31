//
//  main.c
//  Computer Programming Mid Term Project
//
//  Created by Muhammet Mehmet Emin Kartal on 10/31/17.
//  Copyright © 2017 Muhammet Mehmet Emin Kartal. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include "findroots.h"

int atod(char code) {
	return (code < 48 || code > 57) ? 0 : code - 48;
}

int main(int argc, const char * argv[]) {
	// insert code here...
	char* stuNum = "160203004";
	
	int a = atod(stuNum[4]);
	int b = atod(stuNum[5]);
	int c = atod(stuNum[6]);
	int d = atod(stuNum[7]);
	int e = atod(stuNum[8]);
	
	printf("a: %d \nb: %d \nc: %d \nd: %d \ne: %d \n", a,b,c,d,e);
	
	//
	// Find the roots
	printf("---------\n");
	printf("P1Q1: \n");
	// printf("bex^2 + dex + ace = 0\n");
	calcroots((10 * b + e), (10 * d + e), (100 * a + 10 * c + e));
	printf("---------\n");
	printf("P1Q3: \n");
	double sum = 1.0;
	printf("1");
	for (int i = 2; i < (10 * b + e); i++) {
		sum += 1.0 / (double)i;
		printf(" + 1/%d", i);
	}
	printf(" = %lf\n", sum);
	printf("---------\n");
	return 0;
}
