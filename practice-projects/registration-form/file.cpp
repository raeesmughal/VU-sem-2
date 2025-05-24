#include <iostream>
#include <fstream>

using namespace std;

class temp{
	string userName,Email,password;
	fstream file;
	public:
		void login();
		void signUp();
		void forgot();
}obj;

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
		
    	break;
    	
	case '2':
			
    	break;
    	
    	case '3':
		
    	break;
    	
    	case '4':
		
	break;
			
    	default : 
    	cout<<"Invalid Selection...!";
    	break;
    	
	}
}

void temp :: signUp(){
	cout<<"\nEnter Your User Name :: ";
	getline(cin,userName);
	cout<<"\nEnter Your Email Address :: ";
	getline(cin,Email);
	cout<<"\nEnter Your Password :: ";
	getline(cin,password);
	
	file.open("loginData.txt",ios :: out | ios :: app);
	
	file<<userName<<"*"<<Email<<"*"<<password<<endl;
	
	file.close();
}



void temp :: login(){
	string searchName,searchPassword;
	cout<<"---------LOGIN---------"<<endl;
	cout<<"\nEnter your userName :: ";<<endl;
	getline(cin,searchName);
	cout<<"\nEnter your Password :: ";<<endl;
	getline(cin,searchPassword);
	
	file.open("loginData.txt",ios::in);
	getline(file,userName,'*');
	getline(file,Email,'*');
	getline(file,password,'\n');
	
	while(!file.eof()){
		if(userName == searchName){
			if(password == searchPassword){
				cout<< "\nAccount Login Successfull...!";
				
			}
		}
	}
	
	
	
}


