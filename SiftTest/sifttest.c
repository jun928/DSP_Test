#define _CRT_SECURE_NO_WARNINGS
#include <vl/mathop.h>
#include <vl/sift.h>
//#include "img_io.h"
//#include "img_io.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
int read(const char* filename, vl_sift_pix* data, int* w, int* h) {
	vl_sift_pix* _data;
	FILE* in_file;
	char ch, type;
	int i;

	in_file = fopen(filename, "rb");
	if (!in_file)
	{
		fprintf(stderr, "ERROR(0): Fail to open file %s\n", filename);
		return -1;
	}

	return 0;
}
int main() {
	const char* filename = "img1.pgm";
	vl_sift_pix* data;
	//int w, h;
	//read(filename, &data, &w, &h);
	//printf("%d",w);
	//printf("%d", h);
	//int z;
	//test(3, 5, &z);
	//printf("%d\n", z);
	int testpo[10];
	test2(testpo);
	for (int i = 0; i < 5; i++) {
		printf("%d\n", testpo[i]);
	}
	return 0;
}

int test(int x, int y,int *z) {
	(* z) = x + y;	
	return 0;
}
int test2(int *point) {
	for (int i = 0; i < 10; i++) {
		point[i] = i;
	}
	return 0;
}
