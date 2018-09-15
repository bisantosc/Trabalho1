//
//

#include <iostream>
using namespace std;

class Account {


	private:
		int balance;

	public:

		Account (int ibalance ){

			if (ibalance > 0){

				balance = ibalance;				
			}
		}

		int getBalance(){

			return balance;
		}

		void credit (int amount){

			balance = balance + amount;
		}
	
		void debit (int amount){
			if(amount <= balance){
				balance = balance - amount;

			}else if(amount > balance){
				cout << "Debit amount exceeded account balance." << endl;

			}
	
		}



};

int main (){

	Account::Account;


	return 0;
}

