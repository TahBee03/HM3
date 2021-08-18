/*
NAME: Talike Bennett
EMPLID: 23778852
*/

#include <iostream>
#include "HM3_Bennett_23778852_Functions.h"
using namespace std;

void printSums(const double sums[N]) { //Prints the values of an array. Used for sums array.

	for (int i = 0; i < N; i++) {

		cout << "Sum of Row " << i + 1 << ": " << sums[i] << endl;

	}

}

void printSums(const vector<double> sums) { //Prints the values of a vector. Used for sums vector.

	for (int i = 0; i < N; i++) {

    	cout << "Sum of Column " << i + 1 << ": " << sums.at(i) << endl;

    }

}

void printArrayDD(const double array[N][N]) { //Prints the values of a double array (matrix). Used for A[][] and B[][].

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			cout << array[i][j] << "\t";

		}

		cout << endl;

	}

	cout << endl;

}

bool areEqual(const double array1[N][N], const double array2[N][N]) { //Checks if two double arrays (materices) are equal. Used for A[][] and B[][].

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			if (array1[i][j] != array2[i][j]) {

				return false;

			}

		}

	}

	return true;

}

bool isIdentity(const double array[N][N]) { //Checks if a double array (matrix) is an identity matrix. Used for A[][] and B[][].

	/* A matrix is an identity matrix if the main diagonal consists of only 1s and all other values are 0s.
	Definition Source: Khan Academy, "Intro to identity matrix",
	https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:matrices/x9e81a4f98389efdf:properties-of-matrix-multiplication/v/identity-matrix */

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

        	if ((i == j) && (array[i][j] != 1)) {

        		return false;

        	}

        	if ((i != j) && (array[i][j] != 0)) {

        		return false;

        	}

        }

    }

    return true;

}

bool isEven(const int num) { //Checks if an integer is even or not. Used for temp variable in evenAndOdd().

	if (num % 2 == 0) {

		return true;

	} else {

		return false;

	}

}

void evenAndOdd(const double array[N][N]) { //Prints the number of even and odd numbers in a double array (matrix). Used for A[][] and B[][].

	int totals[2];
	totals[0] = 0; //The first element of totals[] holds the amount of even numbers.
	totals[1] = 0; //The second element of totals[] holds the amount of odd numbers.

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			int temp = array[i][j];

			if (isEven(temp)) {

				totals[0]++;

			} else {

				totals[1]++;

			}

		}

	}

	cout << "Even Numbers: " << totals[0] << ", Odd Numbers: " << totals[1] << endl;

}

vector <double> sumOfColumns(const double array[N][N]) { //Returns a vector that holds the sum of the columns of a double array (matrix). Used for A[][] and B[][].

	vector<double> sums (N);

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			sums.at(j) += array[i][j];

		}

	}

	return sums;

}

double* sumOfRows(const double array[N][N]) { //Returns the pointer of an array that holds the sum of the rows of a double array (matrix). Used for A[][] and B[][].

	static double sums[N];

	for (int i = 0; i < N; i++) { //Initializes each element of sums[] with 0 to avoid overlapping addition.

		sums[i] = 0;

	}

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			sums[i] += array[i][j];

		}

	}

	return sums;

}

void sortByRowAndColumn(double array[N][N]) { //Sorts a double array (matrix) in ascending order by rows and then by columns. Used for A[][] and B[][].

	//Based on selection sort done in part 2 of LA3.

    for (int h = 0; h < N; h++) { //Performs selection sort on each row of the matrix.

        int minIndex;
        int temp;

        for (int i = 0; i < N - 1; i++) {

            minIndex = i;

            for (int j = i; j < N; j++) {

                if (array[h][j] < array[h][minIndex]) {

                    minIndex = j;

                }

            }

            temp = array[h][i];
            array[h][i] = array[h][minIndex];
            array[h][minIndex] = temp;

        }

    }

    for (int h = 0; h < N; h++) { //Performs selection sort on each column of the matrix. Indexes were swapped to treat the columns as rows.

        int minIndex;
        int temp;

        for (int i = 0; i < N - 1; i++) {

            minIndex = i;

            for (int j = i; j < N; j++) {

                if (array[j][h] < array[minIndex][h]) {

                    minIndex = j;

                }

            }

            temp = array[i][h];
            array[i][h] = array[minIndex][h];
            array[minIndex][h] = temp;

        }

    }

}

void test_convertArray(double arrayFrom[N], double arrayTo[N]) { //Transfers the elements of one array to another. Used for unit testing.

	for (int i = 0; i < N; i++) {

		arrayTo[i] = arrayFrom[i];

	}

}

bool test_areEqual(const double array1[N], const double array2[N]) { //Checks if two arrays are equal. Used for unit testing.

	for (int i = 0; i < N; i++) {

		if (array1[i] != array2[i]) {

			return false;

		}

	}

	return true;
}
