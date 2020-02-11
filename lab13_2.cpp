#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double arr[][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N] = {{1,2,3,4,6},
       		{6,1,5,3,8},
       		{2,6,4,9,9},
      		{1,3,8,3,4},
       		{5,7,8,2,5}};
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double arr[][N], double m){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < N; j++){
			cout << arr [i][j];
		}
		
	}
	
}


void findLocalMax(const double [][N], bool [][N]){

}

void showMatrix(const bool [][N]){

}