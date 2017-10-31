#pragma once
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

/**
 Finds the roots for given quadratic equation values

 @param a X^2 value
 @param b X value
 @param c constant
 @return Delta value
 */
int calcroots(int a, int b, int c);
