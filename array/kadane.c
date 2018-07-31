/* 

source of exercise: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

Given an array containing both negative and positive integers. Find the contiguous sub-array with maximum sum.
 
Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.
 
Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
 
Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 1000
-100 ≤ A[i] <= 100
 
Example:
Input
2
3
1 2 3
4
-1 -2 -3 -4
Output
6
-1
*/ 

#include <stdio.h>

int kadaneFind(const int *arr, const int sizeArr)
{
    int sumCurrent = *arr;
    int sumCandidate = *arr;
    int i;
    for(i=1; i<sizeArr; i++){
	sumCandidate += *(arr+i); 
	if(sumCandidate>sumCurrent)
	    sumCurrent = sumCandidate;
	else
	    sumCandidate = sumCurrent;
    }
    
    return sumCurrent;
}

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {-1,-2,-3,-4};
    int arr3[] = {0,0,0,0};
    int result; 
    result = kadaneFind(arr1, 3);
    printf("Result 1: %d\n", result);
    result = kadaneFind(arr2, 4);
    printf("Result 2: %d\n", result);
    result = kadaneFind(arr3, 4);
    printf("Result 3: %d\n", result);
    return 0;
}
