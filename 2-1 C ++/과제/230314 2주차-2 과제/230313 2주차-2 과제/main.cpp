#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int funcmin(int B[], int size_B);
int funcmax(int C[], int size_C);


int main()
{
	int random_number[10];
	int size = 10;

	srand((int)time(NULL));
	for (int i = 0; i < size; i++) {
		random_number[i] = rand() % 100 + 1;
		for (int sub_i = 0; sub_i < i; sub_i++) {
			if (random_number[i] == random_number[sub_i]) {
				i--;
				break;
			}
		}
	}
	for (int j = 0; j < size; j++) {
		cout << random_number[j] << " "; 
	}
	cout << endl;



	for (int k = 0; k < size; k++) {
		if ( k !=(funcmin(random_number, size)) && k != (funcmax(random_number, size)) ){
			cout << random_number[k] << " ";
		}
	}



	//funcmin(random_number, size);

	//for (int k = funcmin(random_number, size) + 1; k < size; k++) {
	//	random_number[k - 1] = random_number[k];
	//}
	//size--;

	//for (int n = 0; n < size; n++) {
	//	cout << random_number[n] << " ";
	//}
	//cout << endl;



	//funcmin(random_number, size);
	//
	//for (int l = funcmin(random_number, size) + 1; l < size; l++) {
	//	random_number[l - 1] = random_number[l];
	//}
	//size--;


	//for (int m = 0; m < size; m++) {
	//	cout << random_number[m] << " ";

	//}
}



int funcmin(int B[], int size_B) {
	int min = B[0];
	int min_l=0;
	for (int l = 0; l < size_B; l++) {
		if (min > B[l]) {
			min = B[l];
			min_l = l;
		}
	}
	return min_l;
}

int funcmax(int C[], int size_C) {
	int max = C[0];
	int max_m=0;
	for (int m = 0; m < size_C; m++) {
		if (max < C[m]) {
			max = C[m];
			max_m = m;
		}
	}
	return max_m;
}