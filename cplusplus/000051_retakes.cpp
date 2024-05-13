// Title: Retakes
// Source: Codeforces
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Heap

/**
 * It's well known that student Nikita is a procrastinator. He has failed n exams, therefore he has to retake them. It's possible to retake
 * no more than one exam per day.
 *
 * i-th exam can be retaken at any day starting from the day ti​ . However, lecturers don't want to see students doing nothing during the term.
 * That's why they take money for retakes.
 *
 * Retake of i-th exam costs ci+d roubles, where ci is the initial cost of the retake and d is the number of days passed from the day when
 * this exam became available to retake. Thus, if student retakes the exam just as it becomes available, he expends ci roubles, if he retakes
 * it at the next day he expends ci+1 roubles, and so on.
 *
 * Nikita is poor, lives at the dormitory and, in general, works for food, so he has no money. So every time when he needs money, he borrows
 * from Pavel. Namely, every time when he decides to retake the exam, he comes to Pavel, borrows exactly that sum that he needs to pay for
 * retake, no more and no less, and goes to retake.
 *
 * Pavel has the special form of amnesia: he remembers only maximal debt. For example, if one borrows from him 100 roubles, then 200 roubles,
 * then 200 roubles one more time, and, finally, 150 roubles, Pavel will be absolutely sure that the debt is equal to 200 roubles. Knowing this
 * fact, make the retake schedule for Nikita in such a way that the sum of money to refund to Pavel is minimal. That is, for every exam find a
 * day when Nikita should retake it. It's known that Nikita retakes any exam at the first attempt.
 *
 * Input:
 * The first line contains the only integer n (1≤n≤200000) number of exams that Nikita should retake. Each of the following n lines contains
 * two integers ti and ci (1≤ti≤10^6, 0≤ci≤10^9) separated by space - the first day the i-th exam can be retaken from, and its initial cost.
 * Numbers t1,...,tn​​ are given in non-descending order, i.e. ti≤tj​​ for all i≤j.
 *
 * Output:
 * Write n integers separated by spaces. i-th number should be a day when Nikita should retake i-th exam. If there are many schedules such that
 * the debt is minimal, output any of them.
 *
 * Example 1:
 * Input:
 * 3
 * 1 3
 * 1 1
 * 2 4
 *
 * Output:
 * 1 3 2
 *
 * Example 2:
 * Input:
 * 4
 * 3 5
 * 4 3
 * 4 6
 * 5 3
 *
 * Output:
 * 3 5 4 6
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}