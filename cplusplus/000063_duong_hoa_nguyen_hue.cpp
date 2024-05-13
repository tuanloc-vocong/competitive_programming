// Title: Đường Hoa Nguyễn Huệ
// Source:
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic:

/**
 * Tết Tân Sửu đang đến gần và như thường lệ, UBND thành phố Hồ Chí Minh đang lên kế hoạch tổ chức xây dựng đường hoa Nguyễn Huệ mừng xuân Tân Sửu.
 *
 * Đường hoa gồm nhiều hạng mục nhỏ khác nhau bao gồm các con đường và các tiểu cảnh. Sau khi đánh giá các bản thiết kế hiện đang có, Ban tổ chức
 * quyết định sẽ xem xét một số hạng mục tiểu cảnh đang có để nâng cấp nhằm tăng chất lượng đường hoa, phục vụ nhu cầu của người dân thành phố.
 *
 * Vì các hạng mục được lựa chọn nhằm mục tiêu thu hút du khách nhiều nhất có thể, vì vậy BTC chỉ lựa chọn 2 loại tiểu cảnh:
 *      Tiểu cảnh với hình dạng là một cây: các công trình hoa tươi, tiểu cảnh được trang trí 2 bên đường đi của du khách, các đường đi được kết nối
 *      với nhau mà giữa mỗi địa điểm chỉ có một đường đi tới nhau
 *      Tiểu cảnh dạng vòng tròn: các công trình hoa tươi, tiểu cảnh, trưng bày ở giữa và du khách có thể đi xung quanh để tham quan, chụp ảnh
 *
 * Lưu ý: chúng ta không thể loại bỏ các đường đi đang có hiện tại để tạo ra các hạng mục đó
 *
 * BTC chỉ quyết định chọn các hạng mục có 2 hình dạng trên vì nó không gây ảnh hưởng đến dòng khách tham quan, tránh gây ra cảnh lộn xộn và tắc nghẽn
 * đường đi.
 *
 * Ví dụ:
 * (~/images/000063_duong_hoa_nguyen_hue_01.png)
 * Hình bên trên có thể được xem là 1 con đường.
 *
 * (~/images/000063_duong_hoa_nguyen_hue_02.png)
 * Hình trên có thể xem là một dạng bồn hoa
 *
 * Vì công trình đường hoa Nguyễn Huệ có rất nhiều hạng mục và hầu hết mọi người đang tập trung vào việc chuẩn bị các tiểu cảnh nên việc xác định các
 * hạng mục này được giao lại cho bộ phận IT của thành phố. Để dễ xử lý, sơ đồ bản vẽ của toàn bộ đường hoa được biểu diễn thành một đồ thị.
 *
 * Các hạng mục dạng vòng tròn sau khi được biểu diễn thành đồ thị sẽ có một số dạng như sau:
 * (~/images/000063_duong_hoa_nguyen_hue_03.png)
 *
 * Tương tự như vậy, các hạng mục dạng cây sẽ có dạng như sau:
 * (~/images/000063_duong_hoa_nguyen_hue_04.png)
 *
 * Một số ví dụ không phải 2 dạng trên
 * (~/images/000063_duong_hoa_nguyen_hue_05.png)
 *
 * Bạn là chuyên gia giỏi nhất của bộ phận IT của BTC, vì vậy bạn được giao cho nhiệm vụ cần phải xác định số lượng các hạng mục của 2 loại trên và
 * báo cáo kết quả cho trưởng BTC để chuẩn bị kế hoạch tiếp theo.
 *
 * Input:
 * Gồm T testcase:
 *
 * Mỗi testcase là 1 đồ thị vô hướng gồm n đỉnh và m cạnh (1≤n≤10^5,1≤m≤10^5)
 *
 * m dòng tiếp theo, mỗi dòng gồm 2 số u và v (u khác v và u,v≤n)
 *
 * Bộ test đảm bảo không có các cạnh trùng nhau trong cùng một testcase (nghĩa là (u, v) hay (v, u) chỉ xuất hiện đúng 1 lần)
 *
 * Tổng n trong các testcase sẽ ≤10^5​, tổng m trong các testcase sẽ ≤10^5
 *
 * Output:
 * Mỗi testcase tương ứng với một dòng, gồm 2 số x và y.
 *
 * x là số cây
 *
 * y là số cycle
 *
 * Example 1:
 * Input:
 * 1
 * 8 6
 * 3 5
 * 2 1
 * 4 2
 * 7 8
 * 2 7
 * 8 4
 *
 * Output:
 * 2 0
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}