#include <stdio.h>


int A[10005];
int ctr = 0;


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
	for ( int i = 1; i <= n; i++ ) {
		printf("%d ",A[i]);
	}
	printf("\n No. of Places Moved :  %d\n",ctr);
}

int main() {
	int i;
	A[0] = 10005;
	int Test[] = { 4,1,3,2,16,9,10,14,8,7};
	int n = sizeof(Test)/sizeof(int);
	for ( i = 1; i <= n; i++ ) {
		A[i] = Test[i-1];
	}
	Build_Max_Heap(n);
	show(n);
	return 0;
}







