#include<iostream>
using namespace std;
int main() {
	long S;
	int N;
	cout << "nhap N";
	cin >> N;
	for(int i = 1; i <= N; i++){
		S= S + i*i;
	}
	cout << "Tong S la:"<<S;
	return 0;
	
}
