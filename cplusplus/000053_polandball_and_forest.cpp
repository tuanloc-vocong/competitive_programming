// Title: PolandBall And Forest
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: DFS - BFS

/**
 * PolandBall lives in a forest with his family. There are some trees in the forest. Trees are undirected acyclic graphs with k vertices
 * and k−1 edges, where k is some integer. Note that one vertex is a valid tree.
 *
 * There is exactly one relative living in each vertex of each tree, they have unique ids from 1 to n. For each Ball i we know the id of
 * its most distant relative living on the same tree. If there are several such vertices, we only know the value of the one with smallest
 * id among those.
 *
 * How many trees are there in the forest?
 *
 * Input:
 * The first line contains single integer n (1≤n≤10^4) - the number of Balls living in the forest.
 *
 * The second line contains a sequence p1, p2, ...,pn​​ of length n, where (1≤pi≤n) holds and pi​​ denotes the most distant from Ball i relative
 * living on the same tree. If there are several most distant relatives living on the same tree, pi​​ is the id of one with the smallest id.
 *
 * It's guaranteed that the sequence p corresponds to some valid forest.
 *
 * Output:
 * You should output the number of trees in the forest where PolandBall lives.
 *
 * Example 1:
 * Input:
 * 5
 * 2 1 5 3 3
 *
 * Output:
 * 2
 *
 * Example 2:
 * Input:
 * 1
 * 1
 *
 * Output:
 * 1
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}