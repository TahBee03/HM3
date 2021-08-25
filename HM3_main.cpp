/*
NAME: Talike Bennett
EMPLID: 23778852
*/

#include <iostream>
#include <vector>
#include <cassert> //Library needed to use assert() and perform unit testing.
#include "HM3_Bennett_23778852_Functions.h"
using namespace std;

void TestFunction(double A[N][N], double B[N][N], vector <double> v1, vector <double> v2, int caseNum); //Unit test function. Runs tests for 3x3 matrices.
void TestFunction(double A[N][N], double B[N][N], vector <double> v1, vector <double> v2); //Unit test function. Runs tests for 4x4 matrices.

int main() {

	int caseNum;

	double A[N][N];
	double B[N][N];

	vector <double> test1 = {14, 3, 8, 9, 1, 7, 11, 13, 10, 2, 15, 5, 6, 4, 12, 16};
	vector <double> test2 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
	vector <double> test3 = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
	vector <double> test4 = {3.5, 2.5, 1.5, 0.5, 0, 1, 2, 3, 4};

	if (N == 3) {

		/*
		TEST CASE 1:
		A[][] -> 3x3 matrix with integers
		B[][] -> 3x3 identity matrix
		*/
		caseNum = 1;

		cout << "TEST CASE 1" << endl;
		cout << "A[][] -> 3x3 matrix with integers" << endl;
		cout << "B[][] -> 3x3 identity matrix" << endl;
		cout << endl;
		TestFunction(A, B, test1, test2, caseNum);

		for (int i = 1; i <= 80; i++) {

			cout << "*";

		}

		cout << endl;

		/*
		TEST CASE 2:
		A[][] -> 3x3 matrix with integers
		B[][] -> 3x3 matrix with decimals
		*/
		caseNum = 2;

		cout << "TEST CASE 2" << endl;
		cout << "A[][] -> 3x3 matrix with integers" << endl;
		cout << "B[][] -> 3x3 matrix with decimals" << endl;
		cout << endl;
		TestFunction(A, B, test1, test4, caseNum);

		for (int i = 1; i <= 80; i++) {

			cout << "*";

		}

		cout << endl;

		/*
		TEST CASE 3:
		A[][] -> 3x3 matrix with integers
		B[][] -> 3x3 matrix with integers
		*/
		caseNum = 3;

		cout << "TEST CASE 3" << endl;
		cout << "A[][] -> 3x3 matrix with integers" << endl;
		cout << "B[][] -> 3x3 matrix with integers" << endl;
		cout << endl;
		TestFunction(A, B, test1, test1, caseNum);

	}

	if (N == 4) {

		/*
		TEST CASE 4:
		A[][] -> 4x4 matrix with integers
		B[][] -> 4x4 identity matrix
		*/
		cout << "TEST CASE 4" << endl;
		cout << "A[][] -> 4x4 matrix with integers" << endl;
		cout << "B[][] -> 4x4 identity matrix" << endl;
		cout << endl;
		TestFunction(A, B, test1, test3);

	}

	return 0;

}

void TestFunction(double A[N][N], double B[N][N], vector <double> v1, vector <double> v2, int caseNum) { //Unit test function. Runs tests for 3x3 matrices.

	int vIndex = 0;

	/* ENTER VALUES FOR ARRAY A */
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			A[i][j] = v1.at(vIndex);
			vIndex++;

		}

	}

	vIndex = 0;

	/* ENTER VALUES FOR ARRAY B */
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			B[i][j] = v2.at(vIndex);
			vIndex++;

		}

	}

	/* PRINT VALUES */
	cout << "ARRAY A" << endl;
    printArrayDD(A);

    cout << "ARRAY B" << endl;
    printArrayDD(B);

    /* EQUALITY CHECK */
    cout << "EQUALITY CHECK" << endl;

    switch (caseNum) {

		case 1:
			assert(areEqual(A, B) == false);
			break;
		case 2:
			assert(areEqual(A, B) == false);
			break;
		case 3:
			assert(areEqual(A, B) == true);
			break;

    }

    if (areEqual(A, B)) {

    	cout << "The arrays are equal." << endl;

    } else {

    	cout << "The arrays are not equal." << endl;

    }

    cout << endl;

    /* IDENTITY MATRIX CHECK */
    cout << "IDENTITY MATRIX CHECK" << endl;

    switch (caseNum) {

    	case 1:
    		assert(isIdentity(A) == false);
    		assert(isIdentity(B) == true);
    		break;
    	case 2:
    		assert(isIdentity(A) == false);
    		assert(isIdentity(B) == false);
    		break;
    	case 3:
    		assert(isIdentity(A) == false);
    		assert(isIdentity(B) == false);
    		break;

    }

    if (isIdentity(A)) {

        cout << "Array A is an identity matrix." << endl;

    } else {

        cout << "Array A is not an identity matrix." << endl;

    }

    if (isIdentity(B)) {

        cout << "Array B is an identity matrix." << endl;

    } else {

        cout << "Array B is not an identity matrix." << endl;

    }

    cout << endl;

    /* NUMBER OF EVEN AND ODD NUMBERS */
    cout << "EVEN/ODD NUMBER COUNT" << endl;
    cout << "(Non-integer values have been truncated to perform this calculation.)" << endl;

    cout << "(Array A) ";
    evenAndOdd(A);

    cout << "(Array B) ";
    evenAndOdd(B);

}

void TestFunction(double A[N][N], double B[N][N], vector <double> v1, vector <double> v2) { //Unit test function. Runs tests for 4x4 matrices.

	int vIndex = 0;

	/* ENTER VALUES FOR ARRAY A */
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			A[i][j] = v1.at(vIndex);
			vIndex++;

		}

	}

	vIndex = 0;

	/* ENTER VALUES FOR ARRAY B */
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			B[i][j] = v2.at(vIndex);
			vIndex++;

		}

	}

	/* PRINT VALUES */
	cout << "ARRAY A" << endl;
    printArrayDD(A);

    cout << "ARRAY B" << endl;
    printArrayDD(B);

    /* SUM OF COLUMNS */
    cout << "SUM OF COLUMNS" << endl;

    vector <double> compV1 = {31, 16, 46, 43};
    vector <double> compV2 = {1, 1, 1, 1};

    assert(sumOfColumns(A) == compV1);
    assert(sumOfColumns(B) == compV2);

    cout << "(Array A)" << endl;
    printSums(sumOfColumns(A));

    cout << endl;

    cout << "(Array B)" << endl;
	printSums(sumOfColumns(B));

    cout << endl;

    /* SUM OF ROWS */
    cout << "SUM OF ROWS" << endl;

    double compA1[] = {34, 32, 32, 38};
    double compA2[] = {1, 1, 1, 1};
    double temp[N];

    test_convertArray(sumOfRows(A), temp);
    assert(test_areEqual(temp, compA1));
    cout << "(Array A)" << endl;
    printSums(sumOfRows(A));

    cout << endl;

    test_convertArray(sumOfRows(B), temp);
    assert(test_areEqual(temp, compA2));
    cout << "(Array B)" << endl;
    printSums(sumOfRows(B));

    cout << endl;

    /* SORT FUNCTIONS */
    cout << "SORTING MATRICES" << endl;

    // double sortA[][4] = {{1, 5, 9, 13}, {2, 6, 10, 14}, {3, 7, 11, 15}, {4, 8, 12, 16}};
    // double sortB[][4] = {{0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}};

    cout << "ARRAY A" << endl;
    sortByRowAndColumn(A);
    //assert(areEqual(A, sortA));
    printArrayDD(A);

    cout << "ARRAY B" << endl;
    sortByRowAndColumn(B);
    //assert(areEqual(B, sortB));
    printArrayDD(B);

}
