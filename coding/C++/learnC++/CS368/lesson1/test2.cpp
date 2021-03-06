// Write a C++ function named ArrayEq that has 3 parameters: two arrays of integers, and their size (the same size for both arrays). The function should return true if and only if the arrays contain the same values in the same order. 

#include <iostream>

using namespace std;

bool arrayEq(int A[], int B[], int len);

int main()
{
  int A[3] = {0,1,2};
  int B[3] = {0,1,2};
  int C[3] = {1,0,2};
  cout << arrayEq(A, B, 3) << endl;
  cout << arrayEq(A, C, 3) << endl;
}

bool arrayEq(int A[], int B[], int len)
{
  for (int i = 0; i < len; i++)
    {
      if (A[i] != B[i])
	{
	  return false;
	}
    }
  return  true;
}
