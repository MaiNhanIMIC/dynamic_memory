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

////Nhập một số nguyên từ bàn phím. Kiểm tra một số có phải là số hoàn hảo?
//
//#include<stdio.h>
//bool check(int n) {
//    int sum = 0;//khai bao biem sum
//    for (int i = 1; i < n; i++) {
//        if (n % i == 0)
//            sum += i;
//    }
//    if (sum == n) return true; // tra ve true
//    return false;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    if (check(n))
//        printf("%d la so hoan hao.", n);
//    else
//        printf("%d khong phai la so hoan hao.", n);
//    return 0;
//}

////Nhập một số nguyên từ bàn phím. Kiểm tra một số có phải là số chính phương không?
//
//#include <stdio.h>
//
//int main() {
//    int n;
//    printf("\nNhap n = ");
//    scanf_s("%d", &n);
//    int i = 0;
//    while (i * i <= n) {
//        if (i * i == n) {
//            printf("%d la so chinh phuong!\n", n);
//            return 0;
//        }
//        ++i;
//    }
//    printf("%d khong phai so chinh phuong!\n", n);
//}
////Viết chương trình in ra các số nguyên tố trong phạm vi từ 1 đến n, với n nguyên nhập từ bàn phím.
//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n, temp = 0;
//    printf("\nNhap n = ");
//    scanf_s("%d", &n);
//    if (n < 2)
//    {
//        printf("\ntu 1 den %d khong co so nguyen to", n);
//    }
//    for (temp = 2; temp <= n; temp++)
//    {
//
//        int count = 0;
//        for (int i = 2; i < temp; i++) {
//            if (temp % i == 0) {
//                count++;
//            }
//        }
//        if (count == 0) {
//            printf("\n%d la so nguyen to\r\n", temp);
//        }
//        
//    }
//}

//// Viết chương trình tính:S = 1 + x + 2x2 + 3x3 + ... + nxn Với x là số thực, n là số nguyên được nhập từ bàn phím.
//
//#include <stdio.h>
//#include <math.h>
//
//void main()
//{
//	int n;
//	float x, sum = 0;
//	printf("nhap so nguyen n = ");
//	scanf_s("%d", &n);
//	printf("nhap so thuc x = ");
//	scanf_s("%f", &x);
//	sum += x;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += pow(i, 2);
//	}
//	printf("S = %.3f", sum);
//}