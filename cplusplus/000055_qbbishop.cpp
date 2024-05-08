// Title: Qbbishop
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: DFS - BFS

/**
 * Xét bàn cờ vuông có kích thước n×n. Các dòng được đánh số từ 1 đến n, từ dưới lên trên. Các cột được đánh số từ 1 đến n từ trái qua phải.
 * Ô nằm trên giao của dòng i và cột j được gọi là ô (i,j). Trên bàn cờ có m(0≤m≤n) quân cờ. Với m > 0, quân cờ thứ i ở ô (ri,ci),i=1,2,...,m.
 * Không có hai quân cờ nào ở trên cùng một ô. Trong số các ô còn lại của bàn cờ, tại ô (p,q) có một quân tượng. Mỗi một nước đi, từ vị trí
 * đang đứng quân tượng chỉ có thể di chuyển đến được những ô trên cùng đường chéo với nó mà trên đường đi không phải qua các ô đã có quân.
 *
 * Cần phải đưa quân tượng từ ô xuất phát (p,q) về ô đích (s,t). Giả thiết là ở ô đích không có quân cờ. Nếu ngoài quân tượng không có quân
 * nào khác trên bàn cờ thì chỉ có 2 trường hợp: hoặc không thể tới được ô đích, hoặc là tới được sau không quá 2 nước đi. Khi trên bàn cờ con
 * có các quân cờ khác, vấn đề sẽ không còn đơn giản như vậy.
 *
 * Yêu cầu: Cho kích thước bàn cờ n, số quân cờ hiện có trên bàn cờ m và vị trí của chúng, ô xuất phát và ô đích của quân tượng. Hãy xác định
 * số nước đi ít nhất cần thực hiện để đưa quân tượng về ô đích hoặc đưa ra số -1 nếu điều này không thể thực hiện được.
 *
 * Input:
 * Dòng đầu tiên chứa 6 số nguyên n,m,p,q,s,t
 * Nếu m>0 thì mỗi dòng thứ i tỏng m dòng tiếp theo chứa một cặp số nguyên ri,ci​​ xác định vị trí quân thứ i.
 *
 * Hai số liên tiếp trên cùng một dòng được ghi cách nhau ít nhất một dấu cách.
 *
 * Hạn chế: Trong tất cả các tét: 1≤n≤200. Có 60% số lượng test với n≤20.
 *
 * Output:
 * Một số nguyên là số nước đi tìm được.
 *
 * Example 1:
 * Input:
 * 8 3 7 2 1 4
 * 5 4
 * 3 4
 * 4 7
 *
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}