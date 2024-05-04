// Title: Running Median Again
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Heap

/**
 * Danish has just solved the problem Running Median.

The first line of the problem says "You will be given some integers in non-decreasing order". The problem asks you to report and remove the median of the list every time it is queried.

Having solved this problem, Danish now begins to wonder how to solve the problem if the input is in any order (not necessarily non-decreasing order as mentioned above).

Can you help him?

Your task is to take as input a list of positive integers. Whenever -1 is given as input, you must output the median of the list, and remove it from the list. Take the smaller element as the median in case of even number of elements.

 *
 * Input:
 *

    The input contains several test caes.

    The first line contains an integer tt, the number of test cases.

    Each test case has several lines, each containing an integer n(<=109)n(<=10​9​​). If n is positive, add it to the list. n=−1n=−1 indicates a median query (there will be no median query if the list is empty). The test case is terminated by n=0n=0.

    In each test case, there will be upto 10510​5​​ integers to be added to the list, and upto 10510​5​​ median queries.


 *
 * Output:
 * For each median query as described above, print the median on a new line.
 *
 * Example 1:
 * Input:
 * 1
9
10
2
5
1
18
-1
-1
4
3
-1
8
7
-1
0

 *
 * Output:
 * 5
9
3
7

 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}