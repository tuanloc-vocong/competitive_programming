// Title: City
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Linear Search & Binary Search

/**
 * Bản đồ hành tinh Alpha được chia thành lưới ô vuông có kích thước gồm m dòng và n cột. Các dòng đánh số từ trên xuống dưới,
 * các cột được đánh số từ trái qua phải và đều bắt đầu từ 1. Hai ô gọi là kề nhau nếu có chung cạnh hoặc chung đỉnh. Như vật
 * mỗi ô kề với tối đa 8 ô.
 *
 * Ô ở dòng i, cột j có khả năng sản xuất ai,j​​ đơn vị lương thực trong mỗi tháng với 0≤ai,j≤10^6
 *
 * Một khu dân cư được xây dựng trong một ô bất kì trên bản đồ sẽ được cung cấp lương thực sản xuất ra từ tất cả các ô kề với
 * khu vực dân cư này. Bạn có danh sách k khu dân cư dự kiến sẽ xây dựng, trong đó, khu dân cư thứ i có nhu cầu tiêu thụ ci đơn
 * vị lương thực mỗi tháng (1≤i≤k). Để tối ưu hóa quy hoạch, khu dân cư thứ i có thể được xây dựng tại ô mà tổng lương thực sản
 * xuất của các ô kề đúng bằng ci
 *
 * Yêu cầu: Với mỗi khu dân cư, hãy cho biết tồn tại hay không trên bản đồ một vị trí để xây dựng đảm bảo yêu cầu trên.
 *
 * Input:
 * Dòng đầu chứa của dữ liệu vào chứa 3 số nguyên dương là m,n và k với 3≤m,n≤500, 1≤k≤2000.
 * Dòng thứ i trong số m dòng tiếp theo chứ n số tự nhiên lần lượt là số lương thực sản xuất được của các ô trên dòng i của bản đồ.
 * Dòng cuối cùng gồm k số nguyên dương c1,c2,...,ck​​ với ci​​ là nhu cầu tiêu thụ lương thực của khu dân cư thứ i (với 1≤i≤k). Các
 * số trên cùng một dòng cách nhau bởi đúng một khoảng trắng.
 *
 * Output:
 * Một dòng gồm k số tự nhiên 0 hoặc 1. Số thứ i bằng 1 nếu có thể tìm được vị trí để xây dựng khu dân cư thứ i, trong trường hợp
 * ngược lại số thứ i bằng 0 (với 1≤i≤k).
 *
 * Example 1:
 * Input:
 * 3 4 4
 * 1 9 7 1
 * 1 9 9 5
 * 2 0 0 3
 * 19 100 27 50
 *
 * Output:
 * 1 0 1 0
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}