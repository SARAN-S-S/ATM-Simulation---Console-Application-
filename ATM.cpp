#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	int pin;
	int password = 1980;
	int count = 0;
	int entry;
	int NewPin;
	double deposit = 0.0; 
	double balance = 0.0;
	double withdraw = 0.0;
	const double BALANCE_THRESHOLD = 100.0;
	bool isTrue = true;
	
	system("Color 4E");
	
	first:
	do 
	{
		cout << "***Welcome to Saran Riderz Service***\n ";
	    cout << "Enter your pin:\n";
	    cin >> pin;
	    
	    if(pin == password)
	    {
	    	do
	    	{
	    		cout << "***Welcome to Saran Riderz Service***\n";
	    	    cout << "1. Deposit\n";
	    	    cout << "2. Withdraw\n";
	    	    cout << "3. Balance\n";
	    	    cout << "4. Pin Change\n";
	    	    cout << "5. Exit\n";
	    	    cout << "Choose an option:\n";
	    	    cin >> entry;
	    	
	            
	    	    switch(entry)
	    	    {
	    	     	case 1:
	    	    		cout << "Deposit amount:\n";
	    	        	cin >> deposit;
	        			balance = balance + deposit;
	        			break;
	    			
	        		case 2:
	        			if(balance <= 0)
	        			   cout << "Please deposit some money.\n";
	        			   
	        			else  
	        			{
	            			cout << "Withdraw amount:\n";
	    		        	cin >> withdraw;
	    		        	
	    		        	if(balance < withdraw)
	        			        cout << "The balance is insufficient, you can't withdraw amount.\n";
	        			    else
    	    		    	    balance = balance - withdraw;	
						}
	    	    		
	    			
	        		case 3:
	        			cout << "Current balance $" << balance << endl;
	        			if (balance < BALANCE_THRESHOLD) {
                            cout << "Your account balance is low. Consider making a deposit.\n";
                        }
	    	    		break;
	    	    		
	    	    	case 4:
	        			cout << "Enter a NewPin:\n";
	        			cin >> NewPin;
	        			password = NewPin;
	        			cout << "PIN changed successfully!\n";
	        			goto first;
	    	    		break;
	    			
    	    		case 5:
	        			cout << "Have a nice day...!\n";
	        			isTrue = false;
	    	    		break;
	    			
	        		default:
	        			cout << "Click the correct entry...";
	    	    		break;
			    }    
			}while(isTrue != false);
	    		
		}
		
		else 
		{
			count++;
    			if(count == 3)
	    		    isTrue = false;
		    	else
			        cout << "Wrong Pin...!\n";
		}
	}while(isTrue != false);
	
	
	return 0;
}
