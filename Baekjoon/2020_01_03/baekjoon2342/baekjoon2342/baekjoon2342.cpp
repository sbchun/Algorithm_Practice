
#include <iostream>
#include <sstream>
using namespace std;

//int recursive(int& coord_x, int& coord_y, int* input, int& total_count , int* memo , int count) {
//
//	int sum = 0;
//	int calc_x = input[count] - coord_x;
//	int calc_y = input[count] - coord_y;
// 
//	/*if (count == total_count) {
//		return sum;
//	}*/
//	if (calc_x == 0 || calc_y == 0){
//		count++;
//		sum += 1;
//		return recursive(coord_x, coord_y, input, count+1;
//	}
//	else if (calc_x == input[count] || calc_y ==input[count] ){
//	
//		if (calc_x == input[count]) {
//			coord_x = input[count];
//			sum += 2;
//			return recursive(coord_x, coord_y, input, count)+2;
//		}
//		else {
//			coord_y = input[count];
//			sum += 2;
//			recursive(coord_x, coord_y, input, count) + 2;
//		}
//		
//	
//	}
//	else if (abs(calc_x) != 2 ||abs(calc_y) != 2) {
//		
//		if (abs(calc_x) != 2) {
//			sum += 3;
//
//		}
//		else {
//			sum += 3;
//		}
//
//	}
//	else {
//		
//		coord_x = input[count];
//		sum += 4;
//
//	}
//
//	return sum;
//
//
//};

int recursive(int& coord_x, int& coord_y, int* input, int& total_count, int* memo, int count) {

	int calc_x = input[count] - coord_x;
	int calc_y = input[count] - coord_y;

	if (count == 0) {
		coord_x = input[0];
		return 2;
	}

	if (calc_x == 0 || calc_y == 0) {
		
		return memo[count -1 ] + 1;
	}
	else if (calc_x == input[count] || calc_y == input[count]) {

		if (calc_x == input[count]) {
			coord_x = input[count];
			return memo[count - 1] + 2;
		}
		else {
			coord_y = input[count];
			return memo[count - 1] + 2;
		}


	}
	else if (abs(calc_x) != 2 || abs(calc_y) != 2) {

		if (abs(calc_x) != 2) {
			coord_x = input[count];
			return memo[count - 1] + 3;

		}
		else {
			coord_y = input[count];
			return memo[count - 1] + 3;
		}
	}
	else if (abs(calc_x) == 2 || abs(calc_y) == 2) {

		coord_x = input[count];
		return memo[count - 1] + 4;

	}

};
int main(void) {


	int coord_x = 0;
	int coord_y = 0;
	int count = 0;
	int input = -1;
	int* data = new int[100001];

	while (true) {
		
	cin >> input;
	if (input == 0)
		break;
	data[count++] = input;

	}

	int* memo = new int[count];

	for (int i = 0; i < count; i++) {
		memo[i] = recursive(coord_x, coord_y, data, count, memo, i );
	}
	cout << memo[count - 1];



	delete[] memo;
	delete[] data;


	return 0;
}



/*
	for (int i = 0; i < count; i++) {
		cout << memo[i] << endl;
	}*/
	//cout << " data" << endl;
	//for (int i = 0; i < count; i++) {
	//	cout << data[i] << endl;
	//}
