/*
 ============================================================================
 Name        : prova.c
 Author      : Toni Cafiero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}


int mul(int a, int b)
{
	return a*b;
}

int generic(int op, int a, int b)
{
	switch (op) {
	case 1: return sum(a,b);
	case 2: return sub(a,b);
	case 3: return mul(a,b);
	case 4: return inc(a);
	}
	return 0;
}


