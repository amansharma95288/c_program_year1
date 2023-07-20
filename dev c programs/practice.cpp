#include<iostream>
using namespace std;
int main ()
{   

// program 1-- c++ program to find greatest of three ...??

//    int a,b,c;
//    cin>>a>>b>>c;
//    if(a>b)
//    {
//    	if(a>c)
//    	cout<<"a is biggest "<<a;
//    	else
//    	cout<<"c is biggest "<<c;
//	}
//	else
//	{
//		if(b>c)
//		cout<<"b is biggest "<<b;
//		else
//		cout<<"c is biggest "<<c;
//	}


// program 2-- c++ program for even and odd no. ???

     
//     int n;
//     cin>>n;
//     if(n%2==0)
//     {
//     	cout<<"the given is even";
//	 }
//     else
//     {
//     	cout<<"the given no is odd";
//	 }


// program 3-- c++ prgram for all prime numbers between a and b...??

//     int a,b,i,j;
//     cin>>a>>b;
//     for(i=a;i<=b;i++)
//     {
//     	for(j=2;j<i;j++)
//     	{
//     		if(i%2==0)
//     		{
//     			break;
//			 }
//		 }
//		 if(j==i)
//		 {
//		 	cout<< i<<endl;
//		 }
//	 }


// program 4-- simple basic calculator using switch case .....??

//    int n1,n2;
//    cout<<"enter 2 numbers"<<endl;
//    cin>>n1>>n1;
//    char ch;
//    cout<<"enter the operator"<<endl;
//    cin>>ch;
//    
//    switch(ch)
//    {
//    	case '+':
//    		cout<< n1 + n2 <<endl;
//    		break;
//    	case '-':
//    		cout<< n1 - n2 <<endl;
//    		break;
//    	case '*':
//    		cout<< n1 * n2 <<endl;
//    		break;
//    	case '/':
//    		cout<< n1 / n2 <<endl;
//    		break;
//    	default:
//    	    cout<<"enter another operator"<<endl;
//    	    break;
//	}



//  pattern questions....???
//  first question of pattern type....!!
//      int i,j;
//      for(i=0;i<5;i++)
//      {
//      	for(j=0;j<4;j++)
//      	{
//      		cout<<"* ";
//		  }
//		  cout<<endl;
//	  }
//	  
	  
//  second question of pattern type....!!
     
//      int i,j,r,c;
//      cin>>r>>c;
//      for(i=0;i<r;i++)
//      {
//      	for(j=0;j<c;j++)
//      	{
//      		if(i==0 || i==r ||j==0 || j==c)
//	       {
//      		cout<<" * ";
//	   	    }
//		  else
//		  {
//		  cout<<" ";
//	    	}
//	    }
//		  cout<<endl;
//	  }



// third question of pattern type.....??
 
//   int n,i,j;
//   cout<<"enter the value of n : ";
//   cin>>n;
//   for(i=n;i>0;i--)
//   {
//   	
// // for(j=i;j>0;j--)    
//    for(j=0;j<i;j++)   //alternate logic.... 
//   	{
//   		cout<<" * ";
//	   }
//	   cout<<endl;
//   }




// 4th question of pattern type...??
   
   
//   int i,n,j;
//   cout<<"enter the value of n : ";
//   cin>>n;
//   for(i=0;i<n;i++)
//   {
//   	for(j=0;j<n;j++)
//    	{
//    		if(j<n-i)
//    		{
//    			cout<<" ";
//			}
//			else
//			{			
//			cout<<" * ";
//        	}
//		}
//    	cout<<endl;
//   }





// 5th question of pattern type.....???
// HALF PYRAMID USING NUMBERS...?

//   int n,i,j;
//   cout<<"enter the value of n :";
//   cin>>n;
//   for(i=1;i<=n;i++)
//   {
//   	for(j=0;j<i;j++)
//   	{
//   	  cout<<i;	
//	}
//	cout<<endl;
//   }





//  6th question of pattern type.....????
// FLOYD'S TRAINGLE..

//   int n,i,j,count=1;
//   cout<<"enter the value of n :";
//   cin>>n;
//   for(i=0;i<=n;i++)
//   {
//   	for(j=0;j<=i;j++)
//   	{
//   		cout<< count<<" "; 
//   		count++;
//	   }
//	   cout<<endl;
//   }





// 7th question of pattern type......????
// BUTTERFLY PATTERN ...????

//    int n,i,j,space;
//    cout<<"enter the value of n :";
//    cin>>n;
//    for(i=0;i<n;i++)
//    {
//    	for(j=0;j<i;j++)
//    	{
//    		cout<<"*";
//		}
//		space=2*n-2*i;
//		for(j=0;j<space;j++)
//		{
//			cout<<" ";
//		}
//		for(j=0;j<i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	   for(i=n;i>0;i--)
//    {
//    	for(j=0;j<i;j++)
//    	{
//    		cout<<"*";
//		}
//		space=2*n-2*i;
//		for(j=0;j<space;j++)
//		{
//			cout<<" ";
//		}
//		for(j=0;j<i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}




// QUESTION 8 OF PATTERN TYPE USING C++ ......???
  
//    int n,i,j;
//    cout<<"enter the value of n:";
//    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//    	for(j=1;j<=i;j++)
//    	{
//    		if((i+j)%2==0)
//    		{
//    			cout<<"1";
//			}
//			else
//			cout<<"0";
//		}
//		cout<<endl;
//	}





//  QUESTION 9 OF PATTERN TYPE USING C++......???

//    int n,i,j;
//    cout<<"enter the value of n:";
//    cin>>n;
//    for(i=0;i<=n;i++)
//    {
//    	for(j=0;j<=n-i;j++)
//     	{
//      		cout<<" ";
//	 	}
//		for(j=0;j<=n;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}





//  QUESTION 10 OF PATTERN TYPE USING C++.....????


//    int n,i,j;
//    cout<<"enter the value of n:";
//    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//    	for(j=1;j<=n-i;j++)
//     	{
//      		cout<<" ";
//	 	}
//		for(j=1;j<=i;j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}






// QUESTION 11 OF PATTERN TYPE USING C++.....????
// ******PALENDROME******
//   int n,i,j;
//   cin>>n;
//   for(i=1;i<=n;i++)
//   {
//   	for(j=1;j<=n-i;j++)
//    {
//   	   cout<<" ";
//    }
//     int k=i;
//     for(;j<=n;j++)
//     {
//     	cout<<k--<<" ";
//	 }
//	 k=2;
//	 for(;j<=n+i-1;j++)
//	 {
//	 	cout<<k++<<" ";
//	 }
//	 cout<<endl;
//   }
//   
//   
   
//  QUESTION 12 OF PATTERN TYPE IN C++.....???
// PARAMYID...??


//   int n,i,j;
//   cout<<"enter the value of n:";
//   cin>>n;
//   for(i=1;i<=n;i++)
//   {
//   	for(j=1;j<=n-i;j++)
//   	{
//   	  cout<<" ";	
//	}
//	for(j=1;j<=2*i-1;j++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//   }
//    for(i=n;i>=1;i--)
//   {
//   	for(j=1;j<=n-i;j++)
//   	{
//   	  cout<<" ";	
//	}
//	for(j=1;j<=2*i-1;j++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//   }




//  QUESTION 13 OF PATTERN TYPE IN C++.....??
//-----ZIG ZAG-----

   int n,i,j;
   cout<<"enter the value of n :";
   cin>>n;
   
   for(i=1;i<=3;i++)
   {
   	for(j=1;j<=n;j++)
   	{
   		if(((i+j)%4==0) || (i==2 && j%4==0))
   		{
   			cout<<" * ";
	    }
	    else
	    {
	    	cout<<"  ";
		}
	}
	cout<<endl;
   }
   return 0;
}





















