#include <iostream>

using namespace std;

string tohex(int dec);

string hexa[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};

int main() {

	int num;
	
	cin >> num;
	
	cout << tohex(num) << "\n";
	
	return 0;	
}

string tohex(int dec){
	
	string convert;
	
	if((dec/16) < 1)
	{
		convert = convert + hexa[dec];
	}
	else
	{
		convert = hexa[dec % 16];
		dec = dec / 16 ;		
		convert = (tohex(dec) + convert);
	}
	
	return convert;
}
