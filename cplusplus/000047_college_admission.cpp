// Title: College Admission
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Stack & Queue

/**
 * N people have ranks in college entrance exams numbered from 1 to N such that student X ranked before student Y if X is
 * less than Y . Now, the people do not necessarily arrive at the college on time, so you decide of an unusual way of
 * handling the situation. At the start, you fulfill the admission of the student who ranked first (so if a student having
 * 1 is available then that student can get the admission) otherwise you look for the next available student. If you fulfill
 * the admission of any student and there exist some people (ranked 1 or more) who have ranked earlier but haven’t arrived
 * at the college yet, then those people are said to have missed their admission. If at some point of time there exists a
 * set of people that have missed their admission earlier and the student who had their admission most recently among them
 * (later than others in that set) say student X is now available then X is given the priority to get admission over any
 * other student. But even if any student in that set Y other than X is available and X is not available then you start
 * admissions of the people who have not yet missed their admission in their order of ranking. You are given the order in
 * which people arrive at the college and have to print the order of their admissions.
 *
 * Input:
 * The first line of each test case contains a single integer N, the number of students coming for admission.
 * The next line contains N space-separated integers denoting the order of their arrival.
 *
 * Constraints:
 *      1≤N≤10^4
 *
 * Output:
 * Print in a new line N space-separated integers denoting the order of their admissions
 *
 * Example 1:
 * Input:
 * 9
 * 1 3 2 6 4 7 5 8 9
 *
 * Output:
 * 1 3 2 6 7 5 4 8 9
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}