// Title: Safty the number
// Source: Round 1B 2012 - Code Jam 2012
// Difficulty:
// Time Complexity:
// Topic: Linear Search & Binary Search

/**
 * There are N contestants in a reality TV show. Each contestant is assigned a point value by the judges and receives
 * votes from the audience. The point value given by the judges and the audience's votes are combined to form a final
 * score for the contestant, in the following way:
 *
 * Let X be the sum of the judge-assigned point values of all contestants. Now suppose a contestant got J points from
 * the judges, and that she received a fraction Y (between 0 and 1, inclusive) of the audience's votes (Y might be, for
 * example, 0.3). Then that contestant's final score is J+X∗Y. Note that the sum of all contestants' audience vote fractions
 * must be 1. The contestant with the lowest score is eliminated.
 *
 * Given the points contestants got from judges, your job is to find out, for each contestant, the minimum percentage of
 * audience votes he/she must receive in order for him/her to be guaranteed not to be eliminated, no matter how the rest
 * of the audience's votes are distributed.
 *
 * If the lowest score is shared by multiple contestants, no contestants will be eliminated.
 *
 * Input:
 * The first line of the input gives the number of test cases, T. T test cases follow, one per line. Each line starts with
 * an integer N, the number of contestants, followed by a space, followed by N integers s0,s1,...,sN−1​, separated by single
 * spaces. The integer si​​ is the point value assigned to contestant i by the judges.
 *
 * Constraints
 * 0≤si≤100.
 * si>0 for some i. This means at least one contestant will have a point value greater than 0.
 * 1≤T≤50.
 * 2≤N≤200.
 *
 * Output:
 * For each test case, output one line containing "Case #x: " followed by N real numbers: m_is. The value x is the case number
 * (starting from 1). The value mi​​ is the smallest percentage of audience votes required for contestant i to definitely
 * avoid elimination.
 *
 * Answers within an absolute or relative error of 10^−5 of the correct answer will be accepted.
 *
 * Example 1:
 * Input:
 * 4
 * 2 20 10
 * 2 10 0
 * 4 25 25 25 25
 * 3 24 30 21
 *
 * Output:
 * Case #1: 33.333333 66.666667
 * Case #2: 0.000000 100.000000
 * Case #3: 25.0 25.0 25.0 25.0
 * Case #4: 34.666667 26.666667 38.666667
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}