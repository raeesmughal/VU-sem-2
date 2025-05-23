#include <iostream>
#include <fstream>

using namespace std;

int main (){
	char choice;
	cout<<"\n1- Login";
    cout<<"\n2- Sign Up";
    cout<<"\n3- Forget Password";
    cout<<"\n4- Exit";
    cout<<"\nEnter your choice :: ";
    cin>>choice;
    
    switch(choice){
    	case '1':
    		cout<<"you entered 1";
    	break;
    	
		case '2':
    	    cout<<"you entered 2";	
    	break;
    	
    	case '3':
    		cout<<"you entered 3";
    	break;
    	
    	case '4':
    		cout<<"you entered 4";
    	break;
			
    	default : 
    	cout<<"\nEnter a valid number";
    	break;
    	
	}
}
