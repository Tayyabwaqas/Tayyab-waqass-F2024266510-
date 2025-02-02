#include <iostream>
using namespace std;
int main() {
    float amount;
    float total = 0;
    int choice;
    string firstname = "Tayyab";
    string lastname = "Waqqas";
    string accNo = "023498322112";
    cout << "***Banking System***" << endl;
	do{
		cout << "\n\tSelect one option below:";
        cout << "\n\t1 Balance Enquiry";
        cout << "\n\t2 Deposit";
        cout << "\n\t3 Withdrawal";
        cout << "\n\t4 Account Details";
        cout << "\n\t9 Exit";
        
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
        	case 1:
        		cout << "Your total balance: "<< total<<endl;
        		break;
        	case 2:
        		cout << "Enter amount: ";
        		cin >> amount;
        		total += amount;
        		cout << amount <<" is deposited"<<endl;
        		cout << "Your total balance: "<< total<<endl;
        		break;
        	case 3:
        		cout << "Enter amount: ";
        		cin >> amount;
        		if(total<amount){
        			cout << "Insufficient balance";
        			break;
				}
        		total -= amount;
        		cout << amount <<" is withdrawn"<<endl;
        		cout << "Your remaining balance: "<< total<<endl;
        		break;
        	case 4:
        		cout << "First name: "<< firstname <<endl;
        		cout << "Last name: "<< lastname <<endl;
        		cout << "Acc No: "<< accNo ;
        	case 9:
        		break;
        	default:
             cout << "\nEnter correct choice";
             exit (0);
        		
		}
	}
	while(choice!=9);
    return 0;
}

