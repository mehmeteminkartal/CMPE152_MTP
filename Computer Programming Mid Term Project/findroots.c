//
//  findroots.c
//  Computer Programming Mid Term Project
//
//  Created by Muhammet Mehmet Emin Kartal on 10/31/17.
//  Copyright © 2017 Muhammet Mehmet Emin Kartal. All rights reserved.
//


#include "findroots.h"

int calcroots(int a, int b, int c) {
	printf("%dx^2 + %dx + %d = 0\n", a, b, c);
	int delta = pow(b, 2) - (4 * a * c);
	
	printf("Δ = %d\n", delta);
	
	double sqrtdelta = sqrt((double)(delta));
	
	if (delta < 0) {
		printf("There are no real roots for this equation!\n");
	} else if (delta > 0) {
		double root1 = ((double)(-b) + sqrtdelta) / (2.0 * (double)a);
		double root2 = ((double)(-b) - sqrtdelta) / (2.0 * (double)a);
		printf("Root1: %lf\n", root1);
		printf("Root2: %lf\n", root2);
	} else { // delta == 0
		double root = (-(double)b) / (2.0 * (double)a);
		printf("Root: %lf\n", root);
	}
	return delta;
}
