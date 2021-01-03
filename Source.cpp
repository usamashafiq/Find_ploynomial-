#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
using namespace std;
float evl_ploynomial(int [], int,int  );
void main() {
	int total, a[999], x, s;
	cout << "Enter a size of arry : ";
	cin >> s;
	cout << "Enter a values of array : ";
	for (int i = 0; i < s; i++) {
		cin >> a[i];
	}

	cout << "Enter a value of x : ";
	cin >> x;
	total = evl_ploynomial(a, x, s);
	cout << "Total of plonomial : " << total;
	_getch();
}
float evl_ploynomial(int a[], int x,int s) {
	int p;
	p = s - 1;
	int total = 0;
	for (int i = 0; i < s; i++) {
		int b = pow(x, p);
		total += a[i] * b;
		p--;
	}
	return total;

}

