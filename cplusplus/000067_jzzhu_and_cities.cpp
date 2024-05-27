// Title: Jzzhu And Cities
// Source: Codeforces
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic: Dijkstra

/**
 * Jzzhu is the president of country A. There are n cities numbered from 1 to n in his country. City 1 is the capital of A.
 * Also there are m roads connecting the cities. One can go from city ui to vi​​ (and vise versa) using the ith​ road, the length
 * of this road is xi​​. Finally, there are k train routes in the country. One can use the ith​​ train route to go from capital
 * of the country to city si (and vise versa), the length of this route is yi​​.
 *
 * Jzzhu doesn't want to waste the money of the country, so he is going to close some of the train routes. Please tell Jzzhu
 * the maximum number of the train routes which can be closed under the following condition: the length of the shortest path
 * from every city to the capital mustn't change.
 *
 * Input:
 * The first line contains three integers n, m, k (2≤n≤10^5​​;1≤m≤ 3⋅10^5;1≤k≤10^5​​).
 *
 * Each of the next m lines contains three integers ui​, vi​​, xi​ (1≤ui​, vi​≤n; ui≠vi​​; 1≤xi≤10^9).
 *
 * Each of the next k lines contains two integers si​​ and yi​​ (2≤si≤n;1≤yi≤10^9).
 *
 * It is guaranteed that there is at least one way from every city to the capital. Note, that there can be multiple roads between
 * two cities. Also, there can be multiple routes going to the same city from the capital.
 *
 * Output:
 * Output a single integer representing the maximum number of the train routes which can be closed.
 *
 * Example 1:
 * Input:
 * 2 2 3
 * 1 2 2
 * 2 1 3
 * 2 1
 * 2 2
 * 2 3
 *
 * Output:
 * 2
 *
 * Example 2:
 * Input:
 * 5 5 3
 * 1 2 1
 * 2 3 2
 * 1 3 3
 * 3 4 4
 * 1 5 5
 * 3 5
 * 4 5
 * 5 5
 *
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}