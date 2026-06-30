#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int binary;
	cin >> binary;

	int decimal = 0;
	int base = 1;

	while(binary > 0){
		int bit = binary % 10;
		decimal += bit * base;
		base *= 2;
		binary /= 10;
	}

	cout << decimal;
	return 0;

}