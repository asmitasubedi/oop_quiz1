/*
 Program: Question 6 from quiz 1.
 Name   : Asmita Subedi
 Roll   : 0346
 Output : Garbage value
*/

#include<iostream>
using namespace std;
	
int main()
{
	int a; int* q;
	a = 4;
	q = &a;
	cout << *(q+1);
}


