#include <stdio.h>


int A[10005];
int ctr;

int Parent(int i) {
	return (i/2);
}

int Left(int i) {
	return (2*i);
}

int Right(int i) {
	return ((2*i)+1);
}

void Max_Heapify(int i, int heap_size) {
	int l = Left(i);
	int r = Right(i);
	int largest,temp;
	if((l <= heap_size) && (A[l] > A[i])) {
		largest = l;
	}
	else largest = i;
	if((r <= heap_size) && (A[r] > A[largest])) {
		largest = r;
	}
	if ( largest != i ) {
		temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		ctr++;
		Max_Heapify(largest, heap_size);
	}
}

void Build_Max_Heap(int n) {
	int heap_size = n;
	int i;
	for ( i = n/2; i >= 1; i-- ) {
		Max_Heapify(i, heap_size);
	}
}

void show(int n) {
	printf("\n***** ******** HEAP SIZE : %d *************\n",n);
	for ( int i = 1; i <= n; i++ ) {
		printf("%d ",A[i]);
	}
	printf("\n*****************************************************\n");
	printf("\nNo. of Places Moved :  %d\n\n",ctr);
}

void test1() {
		ctr = 0;
	        FILE *fptr;
	        fptr = fopen("test1.txt","r");
	        int i;
		int n = 100;
	        for ( i = 1 ; i <= 100; i++ ) {
	                fscanf(fptr, "%d,", &A[i]);
	        }
		Build_Max_Heap(100);	       	
		show(100);
	        fclose(fptr);
}

void test2() {
		ctr = 0;
	        FILE *fptr;
	        fptr = fopen("test2.txt","r");
	        int i;
		int n = 250;
	        for ( i = 1 ; i <= 250; i++ ) {
	                fscanf(fptr, "%d,", &A[i]);
	        }
		Build_Max_Heap(250);	       	
		show(250);
	        fclose(fptr);
}

void test3() {
		ctr = 0;
	        FILE *fptr;
	        fptr = fopen("test3.txt","r");
	        int i;
		int n = 500;
	        for ( i = 1 ; i <= 500; i++ ) {
	                fscanf(fptr, "%d,", &A[i]);
	        }
		Build_Max_Heap(500);	       	
		show(500);
	        fclose(fptr);
}

void test4() {
		ctr = 0;
	        FILE *fptr;
	        fptr = fopen("test4.txt","r");
	        int i;
		int n = 1000;
	        for ( i = 1 ; i <= 1000; i++ ) {
	                fscanf(fptr, "%d,", &A[i]);
	        }
		Build_Max_Heap(1000);	       	
		show(1000);
	        fclose(fptr);
}

void test5() {
		ctr = 0;
	        FILE *fptr;
	        fptr = fopen("test5.txt","r");
	        int i;
		int n = 2000;
	        for ( i = 1 ; i <= 2000; i++ ) {
	                fscanf(fptr, "%d,", &A[i]);
	        }
		Build_Max_Heap(2000);	       	
		show(2000);
	        fclose(fptr);
}

int main() {
	int i;
	A[0] = 10005;
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}







