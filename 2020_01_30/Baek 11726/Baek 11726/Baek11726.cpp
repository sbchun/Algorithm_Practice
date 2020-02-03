#include <iostream>


int arr[1000000] = { 0, };
int tiling(int n);


int main(void) {



	int length = 0;
	scanf("%d", length);
	printf("%d", tiling(length));


	return 0;
}
int tiling(int n) {

	if (n == 1 || n==2 || n==3) {
		return n;
	}


}