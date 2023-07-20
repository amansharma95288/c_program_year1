#include<iostream>
using namespace std;
int main ()
{
	//normal input output logic in c++....
	
	
//	int amount1;
//	cin>>amount1;
//	
//	int amount2;
//	cin>>amount2;
//	
//	int sum=amount1+amount2;
//	cout<<"the sum is " << sum;

     //understanding the concept of if/else condition in c++....
     
//    int saving;
//    cin>>saving;
//    if(saving>5000)
//      cout<<"date with neha";
//    else if(saving >2000)
//      cout<<"date with sonali";
//    else
//      cout<<"with friends";

    // nested if/else conditions....
    
//    int saving;
//    cin>>saving;
//    if(saving>5000)
//    {
//	 if(saving>10000)
//	  cout<<"date with neha";
//	  else
//	  cout<<"movie with neha";
//    }
//    else if(saving >2000)
//      cout<<"date with sonali";
//    else
//      cout<<"with friends";


//loops in c++...

//    cout<<"learing for loop";
//    int n,i;
//    cin>>n;
//    int sum=0;
//    for(i=1;i<n;i++)
//    {
//    	sum=sum+i;
//    
//	}
//	cout<<"the sum of n numbers is "<<sum;

//    cout<<"while loop";
//    int n;
//    cin>>n;
//    while(n>0)
//    {
//    	cout<<n<<endl;
//    	cin>>n;
//	}

//
//    cout<<"do-while loop";
//    int n;
//    cin>>n;
//    do
//    {
//    	cout<<n<<endl;
//    	cin>>n;
//	}while(n>0);



//  >> SWITCH STATEMENT:
       
//	 char button;
//	 cin>>button;
//	 switch(button)
//	 {
//	 	case 'a':
//	 		cout<<"hello"<<endl;
//	 		break;
//	 	case 'b':
//	 		cout<<"namaste"<<endl;
//	 		break;
//	 	case 'c':
//	 		cout<<"salut"<<endl;
//	 		break;
//	 	default :
//	 		cout<<"i'm still learing more"<<endl; 
//	  } 
	  
	  
	  
	  // OPERATORS....
//	  
//	1- ARITHMRTIC OPERATOR
//	   1.1)- BINARY OPERATORS= IT ACT WITH 2 OPRANDS LIKE +,-,*,/,%
//	   1.2)- UNARY OPERATORS= ONLY ONE OPERANDS IN WHICH WE'LL PERFORM THRE TASK.
//	       1.21)- INCREMENTER
//	           1.2(a)- pre incrementer(++a)::
//	           	    ex:- 
//	           	    int a=10;
//	           	    int b;
//	           	    b=++a;
//	           	    cout<<a<<" "<<endl;          //output = a=11,b=11
//	           	1.2(b)-post incrementer(a++)::
//	           		ex:-
//	           		int a=10;
//	           		int b;
//	           		b=a++;
//	           		cout<<a<<" "<<endl;          //output =a=11,b=10
//	       1.22)- DECREMENTER (visa-versa):
//	
//	example 1::::
	
//	int i=1;
//	i=i++ + ++i;
//	cout<<i<<endl;


//  EXAMPLE 2:

//	int i=1;
//	int j=2;
//	int k;
//	
//	k=i +j + i++ + j++ + ++i + ++j;
//	cout<<i<<" "<<j<<" "<<k<<endl;



// EXMAPLE 3:

//    int i=0;
//	i=i++ - --i + ++i - i--;
//	cout<<i<<endl;	     



//EXAMPLE 4::

//    int i=1,j=2,k=3;
//    int m=i-- - j-- - k--;
//    cout<<i<<endl;
//    cout<<j<<endl;
//    cout<<k<<endl;
//    cout<<m<<endl;


// EXAMPLE 5::

//    int i=10,j=20,k;
//    k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
//    cout<<i<<endl;
//    cout<<j<<endl;
//    cout<<k<<endl;



//>> REALTIONAL OPERATORS ::
//	- DEFINES A RELATION BETWEEN 2 OPERANDS,RETURN A BOOLEAN VALUE.
//	>>(==,!=,>,<,>=,<=)

//EXAMPLE 1:
//	int n;
//	cin>>n;
//	if(n>10)
//	{
//		cout<<"more than 10"<<endl;
//	}
//	else if (n<10)
//	{
//		cout<<"less than 10"<<endl;
//	}
//	else
//	{
//		cout<<"equal to 10"<<endl;
//    }



//LOGICAL OPERATOR:
//  >>USED TO CONNECT MULTIPLE CONDITION /EXPRESSION TOGETHER OR TO REVERSE LOGICAL VALUES.
//  
//  >>(&&,||,!)


//  EXAMPLE 1:

//   int n;
//   cin>>n;
//   if(n%2==0 && n%3==0)
//   {
//   	cout<<"divisible by both 2 and 3"<<endl;
//	}
//	else if(n%2==0)
//	{
//		cout<<"divisible by only 2"<<endl;
//    }
//  	else if (n%3==0)
//  	{
//  		cout<<"divisible by only 3"<<endl;
//	 }
//	 else 
//	 {
//	 	cout<<"non-divisible"<<endl;
//	 }


//BITWISE OPERATOR::
//> OPERATE ON BITS AND PERFORM BIT-BY-BIT OPERATIONS

//***LEFT SHIFT OPERATOR ?
//   4<<1          SHIFT ONE DIRECTION TO RIGHT.
//   (0100)=1000
//   
//***RIGHT SHIFT OPERATOR ?
//   4>>1            SHIFT ONE DIRECTION TO  LEFT.
//   (0100)=0010
   
   
   

	return 0;
}














