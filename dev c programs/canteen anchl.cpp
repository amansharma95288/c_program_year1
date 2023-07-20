#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	//Quentity
	int Qtables=0, Qfriedrice=0, Qmomo=0, Qchaumin=0, Qdaalchawal=0, Qaaluparatha=0, Qicecream=0, Qcholebhature=0;
	//food item sold
	int stables=0, sfriedrice=0, smomo=0, schaumin=0, sdaalchawal=0, saaluparatha=0, sicecream=0, scholebhature=0;
	//total price of item
	int total_table=0, total_friedrice=0, total_momo=0, total_chaumin=0, total_daalchawal=0, total_aaluparatha=0, total_icecream=0, total_cholebhature=0;
    
    cout<<"\n\t Quantity of items we have" ;
    cout<<"\n tables availabe:" ;
    cin>>Qtables;
    cout<<"\n Quantity of friedrice:" ;
    cin>>Qfriedrice;
    cout<<"\n Quantity of momo:" ;
    cin>>Qmomo;
    cout<<"\n Quantity of chaumin:" ;
    cin>>Qchaumin;
    cout<<"\n Quantity of daalchawal:" ;
    cin>>Qdaalchawal;
    cout<<"\n Quantity of aaluparatha:" ;
    cin>>Qaaluparatha;
    cout<<"\n Quantity of icecream:" ;
    cin>>Qicecream;
    cout<<"\n Quantity of cholebhature:" ;
    cin>>Qcholebhature;
    
    m:
    cout<<"\n\t\t\t\t plearse select from the menu options";
    cout<<"\n\n1) tables ";
    cout<<"\n2) friedrice ";
    cout<<"\n3) momo ";
    cout<<"\n4) chaumin ";
    cout<<"\n5) daalchawal ";
    cout<<"\n6) aaluparatha ";
    cout<<"\n7) icecream ";
    cout<<"\n8) cholebhature ";
    cout<<"\n9) information regarding sales and collection ";
    cout<<"\n10) Exit";
     
    
	  cout<<"\n\n please enter your choice!" ;
	  cin>>choice;
	   switch(choice)
	   {
	   		case 1:
	   		cout<<"\n\n enter the number of tables you want : ";
	   		
	   		cin>>quant;
	   		if(Qtables-stables >=quant)
	   		{
	   			stables=stables+quant;
	   			total_table= total_table+quant*500;
	   			cout<<"\n\n\t\t"<<quant<<"table/tables has been alloted to you!" ;
	   	    }
	   	    else
	   	        cout<<"\n\tOnly"<<Qtables-stables<<"tables remaining in canteen" ;
				   break;		
	   	case 2:
	   		cout<<"\n\n enter friedrice Quantity :" ;
	   		
	   		cin>>quant;
	   		if(Qfriedrice-sfriedrice>=quant)
	   		{
	   			sfriedrice=sfriedrice+quant;
	   			total_friedrice=total_friedrice+quant*120;
	   			cout<<"\n\n\t\t"<<quant<<"friedrice is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qfriedrice-sfriedrice<<"friedrice remaining in canteen" ;	
				   break;			
		case 3:
	   		cout<<"\n\n enter momo Quantity : ";
	   		
	   		cin>>quant;
	   		if(Qmomo-smomo>=quant)
	   		{
	   			smomo=smomo+quant;
	   			total_momo=total_momo+quant*300;
	   			cout<<"\n\n\t\t"<<quant<<"momo is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qmomo-smomo<<"momo remaining in canteen" ;
				   break;	
		case 4:
	   		cout<<"\n\n enter chaumin Quantity : ";
	   		
	   		cin>>quant;
	   		if(Qchaumin-schaumin>=quant)
	   		{
	   			schaumin=schaumin+quant;
	   			total_chaumin=total_chaumin+quant*130;
	   			cout<<"\n\n\t\t"<<quant<<"chaumin is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qchaumin-schaumin<<"chaumin remaining in canteen" ;
			   break;		
		case 5:
	   		cout<<"\n\n enter daalchawal Quantity : ";
	   		
	   		cin>>quant;
			 if(Qdaalchawal-sdaalchawal>=quant)
	   		{
	   			sdaalchawal=sdaalchawal+quant;
	   			total_daalchawal=total_daalchawal+quant*210;
	        	cout<<"\n\n\t\t"<<quant<<"daalchawal is the order!" ;
	   	    }
	   	    else		
	   			cout<<"\n\tOnly"<<Qdaalchawal-sdaalchawal<<"daalchawal remaining in canteen" ;
				   break;		
		case 6:
	   		cout<<"\n\n enter aaluparatha Quantity : ";
	   		
	   		cin>>quant;                                    
	   		if(Qaaluparatha-saaluparatha>=quant)
	   		{
	   			saaluparatha =saaluparatha +quant;
	   			total_aaluparatha =total_aaluparatha +quant*310;
	   			cout<<"\n\n\t\t"<<quant<<"aaluparatha is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qaaluparatha -saaluparatha <<"aaluparatha  remaining in canteen" ;
				   break;	
		case 7:
	 cout<<"\n\n enter icecream Quantity : ";
	   		
	   		cin>>quant;
	   		if(Qicecream-sicecream>=quant)
	   		{
	   			sicecream=sicecream+quant;
	   			total_icecream=total_icecream+quant*90;
	   			cout<<"\n\n\t\t"<<quant<<"icecream is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qicecream-sicecream<<"icecream remaining in canteen" ;
				   break;	
		case 8:
	   	cout<<"\n\n enter cholebhature Quantity : ";
	   		
	   	cin>>quant;
	   		if(Qcholebhature=scholebhature+quant)
	   		{
	   			scholebhature=scholebhature+quant;
	   			total_cholebhature=total_cholebhature+quant*218;
	   			cout<<"\n\n\t\t"<<quant<<"cholebhature is the order!" ;
	   	    }
	   	    else	
	   			cout<<"\n\tOnly"<<Qcholebhature-scholebhature<<"cholebhature remaining in canteen" ;
				   break;
		case 9:
		    cout<<"\n\t\tdetails of sales abd collection";
		    cout<<"\n\n number of tables we had: :"<<Qtables ;  
			cout<<"\n\n number of tables we have given the items :"<<stables ;  
		    cout<<"\n\n number remaining tables : "<<Qtables-stables ;
		    cout<<"\n\n total tables collection for day : "<<total_table;
		
			cout<<"\n\n number of friedrice we had: :"<<Qfriedrice ;  
			cout<<"\n\n number of friedrice we had: :"<<sfriedrice ;   		
			cout<<"\n\n number remaining friedrice : "<<Qfriedrice-sfriedrice ;
		    cout<<"\n\n total friedrice collection for day : "<<total_friedrice ;	  
			
			cout<<"\n\n number of momo we had: :"<<Qmomo ;  
			cout<<"\n\n number of momo we have given the items :"<<smomo ;  
		    cout<<"\n\n number remaining momo : "<<Qmomo-smomo ;
		    cout<<"\n\n total momo collection for day : "<<total_momo;
		    
			cout<<"\n\n number of chaumin we had: :"<<Qchaumin ;  
			cout<<"\n\n number of chaumin we had: :"<<schaumin ;   		
			cout<<"\n\n number remaining chaumin : "<<Qchaumin-schaumin ;
		    cout<<"\n\n total chaumin collection for day : "<<total_chaumin ;
			
			cout<<"\n\n number of daalchawal we had: :"<<Qdaalchawal ;  
			cout<<"\n\n number of daalchawal we have given the items :"<<sdaalchawal ;  
		    cout<<"\n\n number remaining daalchawal : "<<Qdaalchawal-sdaalchawal ;
		    cout<<"\n\n total daalchawal collection for day : "<<total_daalchawal ;
		
			cout<<"\n\n number of aaluparatha we had: :"<<Qaaluparatha ;  
			cout<<"\n\n number of aaluparatha we had: :"<<saaluparatha ;   		
			cout<<"\n\n number remaining aaluparatha : "<<Qaaluparatha-saaluparatha ;
		    cout<<"\n\n total aaluparatha collection for day : "<<total_aaluparatha; 
			
			cout<<"\n\n number of icecream we had: :"<<Qicecream ;  
			cout<<"\n\n number of icecream we had: :"<<sicecream ;   		
			cout<<"\n\n number remaining icecream : "<<Qicecream-sicecream ;
		    cout<<"\n\n total icecream collection for day : "<<total_icecream ;
			
			cout<<"\n\n number of cholebhature we had: :"<<Qcholebhature ;  
			cout<<"\n\n number of cholebhature we have given the items :"<<scholebhature ;  
		    cout<<"\n\n number remaining cholebhature : "<<Qcholebhature-scholebhature ;
		    cout<<"\n\n total cholebhature collection for day : "<<total_cholebhature ;
		    
		    cout<<"\n\n\n total collection for the day: "<<total_table+ total_friedrice+ total_momo+ total_chaumin+ total_daalchawal+ total_aaluparatha+ total_icecream+ total_cholebhature;
		    break;
			case 10:
		exit(0);
			     
		    default:
	        cout<<"\n please select the numbers mentioned above!" ;	     		   
			   
	   }
	   goto m;
}
