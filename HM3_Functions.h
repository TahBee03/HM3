/*
NAME: Talike Bennett
HM3, Header File (Functions)
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
using namespace std;

const int N = 4; //Size of matrices.

//NOTE FROM DEMO 6.6: Arrays are passed into functions and returned as a pointer to their first element.

void printSums(const double sums[N]); //Prints the values of an array. Used for sums array.
void printSums(const vector<double> sums); //Prints the values of a vector. Used for sums vector.
void printArrayDD(const double array[N][N]); //Prints the values of a double array (matrix). Used for A[][] and B[][].

bool areEqual(const double array1[N][N], const double array2[N][N]); //Checks if two double arrays (materices) are equal. Used for A[][] and B[][].
bool isIdentity(const double array[N][N]); //Checks if a double array (matrix) is an identity matrix. Used for A[][] and B[][].

bool isEven(const int num); //Checks if an integer is even or not. Used for temp variable in evenAndOdd().
void evenAndOdd(const double array[N][N]); //Prints the number of even and odd numbers in a double array (matrix). Used for A[][] and B[][].

vector <double> sumOfColumns(const double array[N][N]); //Returns a vector that holds the sum of the columns of a double array (matrix). Used for A[][] and B[][].
double* sumOfRows(const double array[N][N]); //Returns the pointer of an array that holds the sum of the rows of a double array (matrix). Used for A[][] and B[][].

void sortByRowAndColumn(double array[N][N]); //Sorts a double array (matrix) in ascending order by rows and then by columns. Used for A[][] and B[][].

void test_convertArray(double arrayFrom[N], double arrayTo[N]); //Transfers the elements of one array to another. Used for unit testing.
bool test_areEqual(const double array1[N], const double array2[N]); //Checks if two arrays are equal. Used for unit testing.

#endif
