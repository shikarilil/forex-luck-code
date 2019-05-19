#include<iostream>
using namespace std;
int main(){
	//to determine the % wins in forex trading
	change:
	float perc,temp,temp1,amount,start,balance;
	int count=0;
	float profit=0;
	float cover=0;
	int choice;
	cout<<"enter the winning percentage"<<endl;
	cin>>perc;
	cout<<"enter the total amount"<<endl;
	cin>>amount;
	cout<<"enter the starting bet"<<endl;
 	cin>>start;
     //perc=90;
     //amount=50;
    //start=5;
	temp=amount-start;
	while(temp>start){
		temp=temp-start;
		profit=profit+start;
		cout<<"place bet of"<<start<<endl;
		balance=(start*perc)/100;
	
		balance=start-balance;
	//		cout<<"balance is"<<balance<<endl;
		cover=start+balance;
	//	cout<<"cover is"<<cover<<endl;
		temp1=start;
	//	cout<<"temp value is"<<start<<endl;
		start=(cover*100)/perc;
	
		start=start+temp1;
			//cout<<"next starting price is"<<start;
			count++;
			
			
			
			
	}
	cout<<"total amont spent is"<<profit<<endl;
	cout<<"you can make "<<count<<" tries"<<endl;
	cout<<"the remainig amount is"<<(amount-profit)<<endl;
	again:
	cout<<"if you want to change the total amount press 1 and if you want to exit press 0"<<endl;
	cin>>choice;
	if(choice==1){
		goto change;
	}
	else if(choice==0){
		return 0;
	}
	else{
		cout<<"please select a valid option"<<endl;
		goto again;
	}
	
	
}
