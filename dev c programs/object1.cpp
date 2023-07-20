

// CREATE A CLASS PERSON WITH FOLLOWING MEMBER NAME AND AGE AND A FUNCTION CALLED SHOW TO PRINT A DETAILED
// CREATE THREE OBJECT OF THE CLASS . INPUT AND PRINT THE DETAILS OF THE CLASS. 


#include<iostream>
using namespace std;
class person
{
	public:
	string name;
	int age;
	void show();
};

void person::show()
{
	cout<<"the name and age of the person are :"<<name<<" "<<age<<endl;
}
int main()
{
	person detail_1,detail_2,detail_3;
    getline(cin,detail_1.name);
    cin>>detail_1.age;
    cout<<"the name of the employ is "<<detail_1.name<<" "<<"and the age is "<<detail_1.age<<endl;
    detail_1.show();
	
	
	getline(cin,detail_2.name);
	getline(cin,detail_2.name);
    cin>>detail_2.age;
    cout<<"the name of the employ is "<<detail_2.name<<" "<<"and the age is "<<detail_2.age<<endl;
    detail_2.show();    
    
    
    getline(cin,detail_3.name);
	getline(cin,detail_3.name);
    cin>>detail_3.age;
    cout<<"the name of the employ is "<<detail_3.name<<" "<<"and the age is "<<detail_3.age<<endl;
    detail_3.show();   
}
