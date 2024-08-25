#include <iostream>
#include <cstring>

using namespace std;

void menu_display();
void list_files();
void new_directory();
void working_directory();
void list_all();



int main(){
	int input;
	
	while(true){
		menu_display();
		cin>>input;
		
		switch(input){
			case 1:
				list_files();
				break;
			case 2:
				new_directory();
				break;
			case 3:
				working_directory();
				break;
			case 4:
				cout<<"Exit the prog";
				break;
			default:
				cout<<"Invalid!";
				break;
			}
		}
		return 0;
		
	}
	void menu_display(){
		cout<<"1. To Display List of Files"<<endl;
		cout<<"2. To Create New Directory"<<endl;
		cout<<"3. To Change the Working Directory"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter the Number";
		
	}
	void list_files(){
		int input;
		cout<<"1. To Display List of Files"<<endl;
		cout<<"2. To Create New Directory"<<endl;
		cout<<"3. To Change the Working Directory"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter the Number";
		cin>>input;
		
		cout<<"LIST FILE DETAIL";
		cout<<"----------------";
		cout<<"1. List All Files";
		cout<<"2. List All Files";
		cout<<"3. List All Files";
	
		
		switch (input){
			case 1:
				list_all();
				break;
				
				
		}
		
	}
	void new_directory();
	
	
		
	
	
	







