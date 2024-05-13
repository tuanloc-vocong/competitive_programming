// Title: Trip
// Source: OLP HCMUS 2004
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic: Dijkstra

/**
 * Sắp đến 20/10 rồi, Bờm có kế hoạch đi về nhà thăm mẹ của mình. Đất nước mà Bờm đang sống có N thành phố. Hiện Bờm đang học IT ở thành phố 1,
 * và nhà của Bờm thì ở thành phố N. Có M tuyến đường cao tốc, mỗi tuyến đường có một độ dài nhất định và cho phép di chuyển qua lại giữa 2
 * thành phố mà nó kết nối. Bờm sẽ đi qua các tuyến đường cao tốc nhất định để từ thành phố 1 về đến nhà ở thành phố N.
 *
 * Thông thường, khi đi trên tuyến đường cao tốc này, người ta phải trả chi phí bằng tổng độ dài của các tuyến đường cao tốc mà họ đi qua. Tuy
 * nhiên, do Bờm là sinh viên nên sẽ được ưu tiên tính theo cách đặc biệt khác, chi phí mà Bờm phải trả khi đi từ thành phố 1 đến thành phố N
 * bằng với độ dài của tuyến đường cao tốc dài thứ nhì trong số các tuyến đường cao tốc mà Bờm đi qua. Đặc biệt nếu Bờm chỉ đi qua 1 tuyến đường
 * duy nhất thì chi phí mà Bờm phải trả là 0.
 *
 * Ví dụ: Với sơ đồ bên dưới, để đi từ thành phố 1 đến thành phố 4. Nếu Bờm đi theo thứ tự 1->2->4 thì độ dài tuyến đường đi qua lần lượt là 8, 7,
 * Bờm phải trả chi phí là 7; Nếu Bờm đi theo thứ tự 1->3->4 thì độ dài tuyến đường đi qua lần lượt là 2, 100, Bờm phải trả chi phí là 2.
 * (~/images/000065_trip_01.png)
 *
 * Do là sinh viên nên Bờm không có nhiều tiền, hãy giúp Bờm chọn tuyến đường đi sao cho chi phí phải trả là nhỏ nhất. Hoặc thông báo nếu không
 * có tuyến đường nào để đi từ thành phố 1 đến thành phố N.
 *
 * Input:
 * Dòng đầu tiên chứa 2 số N, M
 * M dòng tiếp theo, mỗi dòng gồm 3 số x, y, w, thể hiện có một tuyến đường cao tốc nối giữa thành phố x và thành phố y với độ dài w. Giữa mỗi cặp
 * thành phố chỉ có duy nhất 1 tuyến đường nối giữa chúng. Không có tuyến đường nào nối một thành phố với chính nó.
 *
 * Constraints
 *      2≤N≤10^5
 *      0≤M≤10^5
 *      1≤x,y≤N
 *      1≤w≤10^9
 *
 * Output:
 * Một số nguyên duy nhất là chi phí mà Bờm phải trả. Nếu không tồn tại cách đi để Bờm đến được thành phố N thì xuất ra -1
 *
 * Example 1:
 * Input:
 * 4 4
 * 1 2 8
 * 2 4 7
 * 1 3 2
 * 3 4 1000
 *
 * Output:
 * 2
 *
 * Example 2:
 * Input:
 * 2 1
 * 1 2 1000
 *
 * Output:
 * 0
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}