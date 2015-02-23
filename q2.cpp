/*
 Program: Question 2 from quiz 1.
 Name   : Asmita Subedi
 Roll   : 0346
 Output : Fred Jones
*/

#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	string s;
	string* p;
	s = "Fred Jones";
	p = &s;
	cout << *p;
}
