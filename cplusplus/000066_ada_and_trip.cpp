// Title: Ada And Trip
// Source: Spoj
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic: Dijkstra

/**
 * Ada the Ladybug loves trips. She travels around world taking photos and souvenirs. This week she went to Buganda. Common Tourist
 * would surely travel around main city and some conurbations, but Ada has different politics. She wants to go as far as possible
 * (because photos from outlying places are much more valuable).
 *
 * Problem is, that Buganda is very large so she can barely guess such places. Luckily, you are around so she asked you for help.
 * Can you tell her, how far and how many cities are most distant (if the shortest path is used)?
 *
 * Input:
 * The first line will contain three integers 1≤N≤5⋅10^5​​, 0≤M≤10^6, Q, the number of cities in Buganda, the number of roads and number
 * of queries (possible arrival cities).
 *
 * Then M lines follow, with three integers 0≤A,B<N,0≤L≤10,A,B are cities, which the (bidirectional) road connets and LL is length of the road.

Afterward, QQ lines follow, each with number 0≤qi<N0≤q​i​​<N, meaning the city of arival.

You are asured that maxmax(NN, MM) * QQ will be always lesser/equal than 10710​7​​

Gentle warning: Since we are in real world and not in some "graph theory", multiedges and self-edges are completely valid!

 *
 * Output:
 * For each query print two numbers: The distance of most distant place(s) and number of such places.
 *
 * Example 1:
 * Input:
 * 10 10 10
1 1 1
1 2 1
1 2 3
3 1 1
5 4 10
8 5 10
5 6 5
6 7 3
6 9 3
9 7 4
0
1
2
3
4
5
6
7
8
9

 *
 * Output:
 * 0 1
1 2
2 1
2 1
20 1
10 2
15 2
18 2
20 1
18 2

Explanation:
 Giải thích test ví dụ

Most distant cities (explanation)
0
2 3
3
2
8
4 8
4 8
4 8
4
4 8


 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}