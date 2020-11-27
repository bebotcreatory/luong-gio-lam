#include <iostream>
using namespace std;
int main() {
	double gio,giodu,luonggio,luongtongcong;
	cout << "Nhap so gio lam:";
	cin >> gio;
	cout << "Luong 1 gio:";
	cin >> luonggio;
	if (gio <= 40){
		luongtongcong = gio * luonggio;
		cout << "Lương tong cong: " << luongtongcong;
	}else{
		giodu = gio - 40;
		luongtongcong = gio * luonggio + giodu * 0.5 * luonggio;
		cout << "Luong tong cong: " << luongtongcong;
	}
}