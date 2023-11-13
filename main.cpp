#include <iostream>
using namespace std;
int ktraSoCP(){
	int s = 0;
	for(int i=1; i<n; i++){
		if((int)sqrt(n) == sqrt(n)){
			s+= i;
		}
	}
	return s;
}
int main(){
	int n;
	cout <<"Nhap vao n so nguyen:";
	cin >> n;
	cout <<"So chinh phuong la:" <<ktraSoCP();
	return 0;
}