//============================================================================
// Name        : Bank.cpp
// Author      : Jacob Schwartz
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================
// Notes: I need to access the main file for the account details.
// The main needs variables for the balance
//csv files? get someone else to test the project on their comp

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;



class bankJAS{
private:
	string password;

	double balance = 0.00;
	double scale = 0.01;
	string input;
	string deposit;
	string withdraw;
	string details;
	string records;
	string balanceRecords;
	double dDeposit;
	double dWithdraw;
	bool on = true;
	bool found = false;

	//Borrowed from http://www.cplusplus.com/forum/beginner/31141/
	bool is_number(const string& s) {
		for (int i = 0; i < s.length(); i++) //for each char in string,
			if (!((s[i] >= '0' && s[i] <= '9') || (s[i] == ' ') || (s[i] == '.')))
				return false;
		//if s[i] is between '0' and '9' of if it's a whitespace (there may be some before and after
		// the number) it's ok. otherwise it isn't a number.

		return true;
	}



public:
string user;
void run(string user){
	password = "---Accessing-Files---";
	fstream balances;
	balances.open("bal\\" + user + ".txt", ios::in);

	do {
		balances >> balanceRecords;
		if (balanceRecords == password) {
			balances >> balanceRecords;
			//cout << "The balance found was " << balanceRecords << endl;
			balance = stoi(balanceRecords);
		}
	} while (!balances.eof());

	balances.close();

	//cout << "The balance in the program is " << balance << endl;

	time_t now = time(0);
	char* dt = ctime(&now);
	string date = dt;

	while (on == true) {

		cout << " Your balance is $" << balance << endl;
		cout
				<< "\nWhat would you like to do:\n1. Deposit\n2. Withdraw\n3. View History\n4. Exit to Main Menu"
				<< endl;
		cin >> input;
//input 1
		if (input == "1") {
			cout << "How much would you like to deposit? " << endl;
			cin >> deposit;

			if (is_number(deposit)) {

				dDeposit = stod(deposit);
				balance += dDeposit;
				balance = floor(balance / scale + 0.5) * scale;
				cout << "Would you like to add details to the record? (yes/no) "
						<< endl;
				cin >> input;
				if ((input == "yes") || (input == "y")) {
					cout << "Write it here or type Cancel" << endl;
					cin >> details;
					if (details == "cancel") {
						details = "";
					}

				}
			}

			ofstream outfile;
			outfile.open("data\\" + user + ".txt", ios::app);

			outfile << endl;
			outfile << password << " ;" << endl;

			outfile << dt << " Deposit: $" << dDeposit << ", " << details
					<< ", Balance: $" << balance << " ;" << endl;

			outfile << "~";

			outfile.close();
		} else
//input 2
		if (input == "2") {
			cout << "How much would you like to withdraw? " << endl;
			cin >> withdraw;

			if (is_number(withdraw)) {

				dWithdraw = stod(withdraw);
				balance -= dWithdraw;
				balance = floor(balance / scale + 0.5) * scale;
				cout << "Would you like to add details to the record? (yes/no) "
						<< endl;
				cin >> input;
				if ((input == "yes") || (input == "y")) {
					cout << "Write it here or type Cancel" << endl;
					cin >> details;
					if (details == "cancel") {
						details = "";
					}

				}
			}

			ofstream outfile;
			outfile.open("data\\" + user + ".txt", ios::app);

			outfile << endl;
			outfile << password << " ;" << endl;

			outfile << dt << " Withdrawal: $" << dWithdraw << ", " << details
					<< ", Balance: $" << balance << " ;" << endl;

			outfile << "~";

			outfile.close();

		} else
//input 3
		if (input == "3") {
			//cout << "----- Accessing Files-----" << endl;

			ifstream infile;
			infile.open("data\\" + user + ".txt", ios::in);


			do {
				infile >> records;
				if (records == password) {
					found = true;
					cout << records;
					do {
						infile >> records;
						cout << " " << records;
						if (records == ";") {
							cout << endl;
						}
					} while (records != "~");
					cout << endl;
				}

			} while (!infile.eof());

			if (infile.eof() && !found) {
				cout << "No records found." << endl;
			}


			infile.close();
//input 4
		} else{

			fstream balances;
			balances.open("bal\\" + user + ".txt", ios::app);

			balances << endl;
			balances << password << " " << balance;

			balances.close();
			on = false;
		}

	}
}
};
