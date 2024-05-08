// Title: Pie Process
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Heap

/**
 * Some pies are sweet, full of fruit and jam and sugar.
 *
 * Some pies are savory, full of meat and potatoes and spices.
 *
 * Some pies are in fact not pies at all but tarts or galettes. This probably won't stop you from eating them.
 *
 * Every single day for N days, you're determined to eat a pie for dinner. Every morning, you'll take a trip to your local pie shop,
 * and buy 0 or more of their pies. Every night, you'll eat one pie that you've bought. Pies never go bad, so you don't need to eat
 * a pie on the same day that you bought it. You may instead eat one that you purchased on an earlier day.
 *
 * On the ith day, the shop has M pies for sale, with the jth of these pies costing Ci,j​​ dollars. You can choose to buy any (possibly
 * empty) subset of them. However, this shop has measures in place to protect itself against crazy pie fanatics buying out its products
 * too quickly. In particular, if you buy p pies on a single day, you must pay an additional tax of p^2 dollars.
 *
 * Input:
 * Input begins with an integer T, the number of times you go on a pie-eating spree. For each case, there is first a line containing
 * two space-separated integers, N and M. Then, N lines follow, each containing M space-separated integers. The jth integer on the ith
 * line is Ci,j​​.
 *
 * Output:
 * For the ith case, print a line containing "Case #i: " followed by the minimum you need to pay to eat a pie every day.
 *
 * Constraints
 *      1 ≤ T ≤ 100
 *      1 ≤ N, M ≤ 300
 *      1 ≤ Ci,j ≤ 1,000,000
 *
 * Example 1:
 * Input:
 * 5
 * 3 2
 * 1 1
 * 100 100
 * 10000 10000
 * 5 1
 * 1
 * 2
 * 3
 * 4
 * 5
 * 5 5
 * 1 2 3 4 5
 * 2 3 4 5 1
 * 3 4 5 1 2
 * 4 5 1 2 3
 * 5 1 2 3 4
 * 5 5
 * 1 1 1 1 1
 * 2 2 2 2 2
 * 3 3 3 3 3
 * 4 4 4 4 4
 * 5 5 5 5 5
 * 10 4
 * 7 15 12 6
 * 15 3 19 18
 * 10 9 10 14
 * 12 14 8 8
 * 5 3 5 11
 * 9 14 19 11
 * 12 6 20 9
 * 18 13 12 15
 * 14 14 10 20
 * 11 19 12 11
 *
 * Output:
 * Case #1: 107
 * Case #2: 20
 * Case #3: 10
 * Case #4: 18
 * Case #5: 79
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}