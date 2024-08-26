#include <iostream>
#include <cstring>
#include <io.h>

using namespace std;

void menu_display();
void list_files();
void new_directory();
void working_directory();
void list_all();
void extens_files();
void list_namewise();



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
	
		switch (input){
			case 1:
				list_all();
				break;
			case 2:
				 extens_files();
				break;
			case 3:
				list_namewise();
				break;
			case 4:
				cout<<"Exit";
				break;
			default:
				cout<<"Invalid Input!";
		
		}
		
	}
	void list_all(){
		
		struct _finddata_t fileinfo;
    intptr_t handle = _findfirst(pattern.c_str(), &fileinfo);

    if (handle == -1) {
        cout << "No files found."<<endl;
        return;
    }

    do {
        cout << fileinfo.name<<endl;
    } while (_findnext(handle, &fileinfo) == 0);

    _findclose(handle);
}
	
		
		
		
	}
	
	void new_directory(){
		
	}

