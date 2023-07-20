
// CREATE A CLASS CALLED TRAINGLE IT WILL HAVE 3 VARIABLE REPRESENTING THE THREE SIDES OF A TRAINGLE CREATE FOLLOWING FUNCTION
//1- DISPLAY() FUNCTION.
//2- PARAMETER ()

#include<iostream>
using namespace std;
class aman
{
	public:
		int s1,s2,s3,p;
	    void disp();
		void para();
};

void aman::disp()
{
	cout<<"the side of traingle are :"<<s1<<" "<<s2<<" "<<s3<<endl;
}
void aman::para()
{
	p=s1+s2+s3;
	cout<< "the parameter of traingle is :"<<p;
}
int main ()
{
	aman info;
	cin>>info.s1>>info.s2>>info.s3;
	info.disp();
	info.para();
}
