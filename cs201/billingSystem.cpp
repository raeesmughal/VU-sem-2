# include <iostream>
using namespace std;

int main()
{
	string name = "Raees Mughal";
	string vuID = "BC240403334";
	
	cout << "Name: " << name << endl;
	cout << "VU-ID: " << vuID << endl;
	
	int numID;
	cout << "\n Enter numeric part of VU-ID: ";
	cin >>numID;
	int middle = (numID / 100) % 100000;
	int d1 = (middle/10000)%10;
	int d2 = (middle/1000)%10;
	int d3 = (middle/100)%10;
	int d4 = (middle/10)%10;
	int d5 = middle%10;
	
	cout << "\nExtracted Middle Five Digits: ";
	cout<< d1 << d2 << d3 << d4 << d5 << endl;
	
	int priceBurger = 250;
	int pricePizza = 500;
	int priceFries = 150;
	int priceSandwich = 200;
	int priceDrink = 100;
	
	int totalBurger = d1*priceBurger;
	int totalPizza = d2*pricePizza;
	int totalFries = d3*priceFries;
	int totalSandwich = d4*priceSandwich;
	int totalDrink = d5*priceDrink;
	int total = totalBurger + totalPizza + totalFries + totalSandwich + totalDrink;
	
	cout << "\n=== Welcome to C++ Cafe ==="  << endl;
	cout << "------ Menu ------" << endl;
	cout << "1. Burger     - Rs. 250" << endl;
	cout << "2. Pizza      - Rs. 500" << endl;
	cout << "3. Fries      - Rs. 150" << endl;
	cout << "4. Sandwich   - Rs. 200" << endl;
	cout << "5. Cold Drink - Rs. 100" << endl;
	
	cout << "\nBurger (" << d1 << "x Rs. " << priceBurger << ") = Rs. " << totalBurger << endl;
	cout << "Pizza (" << d2 << "x Rs. " << pricePizza << ") = Rs. " << totalPizza << endl;
	cout << "Fries (" << d3 << "x Rs. " << priceFries << ") = Rs. " << totalFries << endl;
	cout << "Sandwich (" << d4 << "x Rs. " << priceSandwich << ") = Rs. " << totalSandwich << endl;
	cout << "Cold Drink (" << d5 << "x Rs. " << priceDrink << ") = Rs. " << totalDrink << endl;
	
	
	float discount = 0;
	
	if(total>=5000){
		cout << "\nSurprise! You've unlocked a 10% discount" << endl;
		discount = total*0.10;
	}
	
	float netPayable = total - discount;
	
	
	cout << "\n==== Total Bill ====" << endl;
	cout << "Total before discount: Rs. " << total << endl;
	cout << "Discount: Rs. " << discount << endl;
	cout << "Net Payable Amount: Rs. " << netPayable << endl;
	
	cout << "\nThank you for visiting C++ Cafe!" << endl;
	
	return 0;
}
