#include<iostream>
#include"sub.h"

using namespace std;
int main()
{
	int a,b;
	cout<<"enter your first numbers" , a; 
	cin>>a;
	cout<<"enter your second numbers" , b; 
	cin>>b;
	cout<<"diffrence is: "
		<<sub(a,b)
		<<endl;
}
