#include <iostream>

using namespace std;

int main(){
	int hours;
	int fee=0;
	
	cout<<"Enter the number of hours you spend at gym: ";
	cin >> hours;
	
	if(hours<=0){
		cout << "Invalid input! Please enter a positive number of hours."<<endl;
	}
	else{
		switch(hours){
			case 1:
				fee=0;
				break;
			default :
				fee = (hours-1)*200;
				break;
		}
		cout << "Total gym fee: Rs."<<fee<<endl;
	}
	return 0;
}

