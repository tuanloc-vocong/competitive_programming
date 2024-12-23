// Title: Tourist
// Source: Facebook Hacker Cup 2018 Qualification Round
// Difficulty:
// Time Complexity:
// Topic: Sorting

/**
 * The Facebook campus has N different attractions, numbered from 1 to N in decreasing order of popularity. The name of
 * the i-th attraction is Ai​, a unique, non-empty string consisting of at most 20 characters. Each character is either
 * a lowercase letter ("a".."z"), uppercase letter ("A".."Z"), or digit ("0".."9").
 *
 * Alex enjoys visiting the campus repeatedly for tours (including the free food!). Each time he visits, he has time to
 * see exactly K of the attractions. To decide which K he'll see, he sorts the N attractions in non-decreasing order of
 * how many times he's already seen them before, breaking ties in decreasing order of popularity, and then chooses the
 * first K attractions in the sorted list. In other words, he prioritizes seeing attractions which he's seen the fewest
 * number of times previously, but also opts to see the most popular attractions out of the ones he's seen an equal number
 * of times.
 *
 * Alex has visited the Facebook campus V−1 separate times already, and is about to go for his V-th visit. Given that he's
 * always followed the rules stated above, and that he'll continue to, he'd like to determine which K attractions he'll see
 * on his Vth visit. He'd like to list them in decreasing order of popularity (in other words, in the same relative order as
 * they appear in the given list of all N attractions).
 *
 * Input:
 * Input begins with an integer T, the number of campuses. For each campus, there is first a line containing the space-separated
 * integers N, K, and V. Then, N lines follow. The ith of these lines contains the string Ai​​.
 *
 * Constraints
 *
 * 1≤T≤80.
 * 1≤K≤N≤50.
 * 1≤V≤10^12​​.
 *
 * Output:
 * For the i-th campus, print a line containing Case #i: followed by K space-separated strings, the names of the attractions
 * that Alex sees on his V-th visit, in decreasing order of popularity.
 *
 * Example 1:
 * Input:
 * 6
 * 4 1 3
 * LikeSign
 * Arcade
 * SweetStop
 * SwagStore
 * 4 4 100
 * FoxGazebo
 * MPK20Roof
 * WoodenSculpture
 * Biryani
 * 4 3 1
 * LikeSign
 * Arcade
 * SweetStop
 * SwagStore
 * 4 3 3
 * LikeSign
 * Arcade
 * SweetStop
 * SwagStore
 * 4 3 10
 * LikeSign
 * Arcade
 * SweetStop
 * SwagStore
 * 2 1 1000000000000
 * RainbowStairs
 * WallOfPhones
 *
 * Output:
 * Case #1: SweetStop
 * Case #2: FoxGazebo MPK20Roof WoodenSculpture Biryani
 * Case #3: LikeSign Arcade SweetStop
 * Case #4: LikeSign SweetStop SwagStore
 * Case #5: LikeSign Arcade SwagStore
 * Case #6: WallOfPhones
 *
 * Explanation:
 * In the first case, Alex saw the LikeSign on his first visit and the Arcade on his second visit. On his third visit he sees
 * the SweetStop as its the most popular of the attractions he hasn't yet seen.
 *
 * In the third and fourth cases, Alex sees {LikeSign, Arcade, SweetStop} on his first visit, then {LikeSign, Arcade, SwagStore},
 * then {LikeSign, SweetStop, SwagStore}.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}