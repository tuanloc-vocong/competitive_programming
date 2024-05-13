// Title: Cooking The Books
// Source: Facebook Hackercup 2015 - Qualification Round
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Algorithmic Complexity

/**
 * Every business can make use of a good accountant and, if they're not big on following the law, sometimes a bad one. Bad accountants
 * try to make more money for their employers by fudging numbers without getting caught.
 *
 * Sometimes a bad accountant wants to make a number larger, and sometimes smaller. It is widely known that tax auditors will fail to
 * notice two digits being swapped in any given number, but any discrepancy more egregious will certainly be caught. It's also painfully
 * obvious when a number has fewer digits than it ought to, so a bad accountant will never swap the first digit of a number with a 0.
 *
 * Given a number, how small or large can it be made without being found out?
 *
 * Input:
 * Input begins with an integer T, the number of numbers that need tweaking. Each of the next T lines contains a integer N.
 *
 * Constraints
 *      1≤T≤100
 *      0≤N≤999999999
 *      N will never begin with a leading 0 unless N=0
 *
 * Output:
 * For the ith number, print a line containing "Case #i: " followed by the smallest and largest numbers that can be made from the original
 * number N, using at most a single swap and following the rules above.
 *
 * Example 1:
 * Input:
 * 5
 * 31524
 * 897
 * 123
 * 10
 * 5
 *
 * Output:
 * Case #1: 13524 51324
 * Case #2: 798 987
 * Case #3: 123 321
 * Case #4: 10 10
 * Case #5: 5 5
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}