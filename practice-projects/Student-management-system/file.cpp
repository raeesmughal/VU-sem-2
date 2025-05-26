#include<iostream>
#include<fstream>

using namespace std;

class temp{
	string rollno,name,fatherName,address,search;
	fstream file;
	public:
		void addStudent();
		void viewStudent();
		void searchStudent();
};

int main(){
	char choice;
	cout<<"----------STUDENT MANAGEMENT SYSTEM----------";
	cout<<"\n1. Add student record";
	cout<<"\n2. View student record";
	cout<<"\n3. Search student record";
	cout<<"\n4. Exit\n";
	cout<<"Enter your Choice";
	cin>>choice;
	
	switch(choice){
		case '1':
			
		break;
		
		case '2':
			
		break;
		
		case '3':
			
		break;
		
		case '4':
			cout<<"Good Bye";
			return 0;
		break;
		
		default:
			cout<<"Invalid Choice.";
		break;
					
	}
	
	
	
}


void temp :: addStudent(){
	cout<<"Enter Student Roll no. :: ";
	getline(cin,rollno);
	cout<<"Enter Student Name :: ";
	getline(cin,name);
	cout<<"Enter Student Father Name :: ";
	getline(cin,fatherName);
	cout<<"Enter Student Address :: ";
	getline(cin,address);
	
	file.open("studentData.txt",ios :: out | ios :: app);
	file<<rollno<<"*";
	file<<name<<"*";
	file<<fatherName<<"*";
	file<<address<<endl;
	file.close();
}


void temp :: viewStudent(){
	file.open("studentData.txt",ios::in);
	getline(file,rollno,'*');
	getline(file,name,'*');
	getline(file,fatherName,'*');
	getline(file,address,'\n');
	
	while(file.eof()){
		cout<<"\n";
		cout<<"Student Rollno. :: "<<rollno;
		cout<<"Student Name :: "<<name;
		cout<<"Student Father Name :: "<<fatherName;
		cout<<"Student Address :: "<<address<<endl;
		
		
	getline(file,rollno,'*');
	getline(file,name,'*');
	getline(file,fatherName,'*');
	getline(file,address,'\n');
	}
	
	file.close();
	
}


void temp :: searchStudent(){
	cout<<"Enter Student Rollno. :: ";
	getline(cin,rollno);
	
	
	file.open("studentData.txt",ios::in);
	getline(file,rollno,'*');
	getline(file,name,'*');
	getline(file,fatherName,'*');
	getline(file,address,'*');
	
	
}








