// Title: Naughty or Nice?
// Source: High School Programming Tournament 2017
// Difficulty:
// Time Complexity:
// Topic:

/**
 * It is widely known that Santa Claus delivers presents to houses all over the world in December.
 *
 * However, not many people know what he does during the rest of the year. You see, Santa enjoys a jolly good prank, and
 * he'll often find himself pranking entire cities when he's not busy making or delivering toys. One place that he particularly
 * enjoys pranking is the South Pole. There are h houses in the South Pole, which are conveniently numbered from 1 to h. Whenever
 * Santa is in the mood for pranking, he'll start at a particular house, s. He rings the doorbell, then runs to another house.
 *
 * He always visits houses in order, but just so he doesn't arouse suspicion, he only knocks on every kth house (for example,
 * every 2nd​​ or 3rd​​ house), where k≥2. This is because the residents (who are penguins) would know that something's up if one or
 * both of their next door neighbors were pranked as well. Once Santa pranks p houses that day (or passes house number h), he goes
 * back home to the North Pole. After pranking houses for d days, though, Santa feels bad for pranking the penguins so many times.
 * To make things right, he decides that next Christmas he will award the biggest and best gift to the penguin who got pranked the
 * most. If there are multiple houses that got pranked the most, he will award the gift to the penguin in the lowest numbered house.
 *
 * The Problem: Help Santa by telling him which house should receive the biggest and best gift the following Christmas. Santa, of
 * course, wants to make amends each and every year so he needs your suggestion for each one.
 *
 * Input:
 * The first line contains a single, positive integer, y, representing the number of years that Santa goes to the South Pole to prank.
 * The first line of each year contains two integers, h and d(1≤h≤100,000;1≤d≤100,000), representing the number of houses and the
 * number of days that Santa pranked the South Pole that year, respectively.
 *
 * The next d lines each contain three integers, s,k, and p (1≤s≤h;2≤k≤10;1≤p≤h), denoting the starting house, the number representing
 * his frequency of visiting houses (he skips k−1 houses), and the maximum number of houses he pranks that day. Note that he will
 * visit p houses unless he passes the very last house.
 *
 * Output:
 * For each year, output a single line:
 *
 * House g should get the biggest and best gift next Christmas.
 *
 * (where g is the house number that should receive the gift for that year.)
 *
 * Example 1:
 * Input:
 * 2
 * 4 3
 * 1 2 1
 * 3 4 2
 * 2 2 2
 * 10 2
 * 2 3 2
 * 3 2 5
 *
 * Output:
 * House 1 should get the biggest and best gift next Christmas.
 * House 5 should get the biggest and best gift next Christmas.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}