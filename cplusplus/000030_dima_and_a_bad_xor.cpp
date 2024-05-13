// Title: Dima And A Bad Xor
// Source: Codeforces
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Bit Manipulation

/**
 * Student Dima from Kremland has a matrix aa of size n×m filled with non-negative integers.
 *
 * He wants to select exactly one integer from each row of the matrix so that the bitwise exclusive OR of the selected
 * integers is strictly greater than zero. Help him!
 *
 * Formally, he wants to choose an integers sequence c1,c2,...,cn​​ (1≤cj≤m) so that the inequality a1,c1​ ⊕ a2,c2​​​​ ⊕ ... ⊕
 * an,cn​​​​ > 0 holds, where ai,j​​ is the matrix element from the i-th row and the j-th column.
 *
 * Here x⊕y denotes the bitwise XOR operation of integers x and y.
 *
 * Input:
 * The first line contains two integers n and m(1≤n,m≤500) — the number of rows and the number of columns in the matrix a.
 *
 * Each of the next n lines contains mm integers: the j-th integer in the i-th line is the j-th element of the i-th row of
 * the matrix a, i.e. ai,j(0≤ai,j≤1023).
 *
 * Output:
 * If there is no way to choose one integer from each row so that their bitwise exclusive OR is strictly greater than zero,
 * print NIE.
 *
 * Otherwise print TAK in the first line, in the next line print n integers c1,c2,...,cn(1≤cj≤m), so that the inequality
 * a1,c1​​​​ ⊕ a2,c2​​​​ ⊕ ... ⊕ an,cn>0 holds.
 *
 * If there is more than one possible answer, you may output any.
 *
 * Example 1:
 * Input:
 * 3 2
 * 0 0
 * 0 0
 * 0 0
 *
 * Output:
 * NIE
 *
 * Example 2:
 * Input:
 * 2 3
 * 7 7 7
 * 7 7 10
 *
 * Output:
 * TAK
 * 1 3
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}