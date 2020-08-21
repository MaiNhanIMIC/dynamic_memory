////******************************************
////Tính tổng bình phương các số lẻ từ 1 đến n
//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	unsigned int res = 0,n;
//	printf("n = ");
//	scanf_s("%d", &n);
//	for (int i = 0; i <= n; ++i)
//	{
//		if (i % 2 != 0)
//		{
//			res += pow(i, 2);
//		}
//	}
//	printf("\nTong binh phuong cac so le tu 1 den %d la %d", n, res);
//}

//***************************************
////Tim Max cua 3 so a,b,c nhap tu ban phim
//
//#include<stdio.h>
//#include <algorithm>
//void main()
//{
//	int a, b, c, maxValue;
//	printf("a = ");
//	scanf_s("%d", &a);
//	printf("b = ");
//	scanf_s("%d", &b);
//	printf("c = ");
//	scanf_s("%d", &c);
//	maxValue = std::max(std::max(a, b), c);
//	printf("max cua %d, %d, %d la %d", a, b, c, maxValue);
//}

////***************************************
////Nhap so nguyen tu ban phim, kiem tra tinh chan le
//
//#include<stdio.h>
//void main()
//{
//	int n;
//	printf("nhap mot so nguyen : ");
//	scanf_s("%d", &n);
//	if (n % 2 == 0) printf("\n%d la so chan", n);
//	else printf("\n%d la so le", n);
//}
//

////Tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so nguyen nhap tu ban phim
////**********************************************************************************
//#include<iostream>
//using namespace std;
//int gcd(int m, int n) {
//    int r = 0, a, b;
//    a = (m > n) ? m : n;
//    b = (m < n) ? m : n;
//    r = b;
//    while (a % b != 0) {
//        r = a % b;
//        a = b;
//        b = r;
//    }
//    return r;
//}
//int lcm(int m, int n) {
//    int a;
//    a = (m > n) ? m : n;
//    while (true) {
//        if (a % m == 0 && a % n == 0)
//            return a;
//        ++a;
//    }
//}
//int main(int argc, char** argv) {
//    cout << "Nhap 2 so:  ";
//    int m, n;
//    cin >> m >> n;
//    cout << "Uoc so chung nho nha la: " << gcd(m, n) << endl;
//    cout << "Boi so chung lon nhat la: " << lcm(m, n) << endl;
//    return 0;
//}