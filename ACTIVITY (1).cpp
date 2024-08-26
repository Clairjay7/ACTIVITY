#include <iostream>
#include <cstring>
#include <io.h>
#include <direct.h>   
#include <cstdlib>

using namespace std;

void menu_display();
void list_files();
void create_directory();
void list_all();
void extens_files();
void list_namewise();
void change_direct();
void back_ward();
void goto_root();
void for_ward();

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
				create_directory();
				break;
			case 3:
				list_namewise();
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
		cout<<"Enter the Number: ";
		
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
    	intptr_t handle = _findfirst(".", &fileinfo);

    if (handle == -1) {
        cout<<"No files found."<<endl;
        return;
    }

    do {
        cout<<fileinfo.name<<endl;
    } while (_findnext(handle, &fileinfo) == 0);

    _findclose(handle);
}
	
	void extens_files(){
		string extens;
		cout<<" The file extension: ";
		cin>>extens;
		string namew = "*" + extens;
		
		struct _finddata_t fileinfo;
    	intptr_t handle = _findfirst(namew.c_str(), &fileinfo);
    	
    	if(handle == -1){
    		cout<<"No files with the extension"<<extens<<endl;
    		return;
    		
		}
		
		do {
        cout<<fileinfo.name<<endl;
    } while (_findnext(handle, &fileinfo) == 0);

    _findclose(handle);
	}
	void list_namewise(){
		string namew;
		cout<<"Enter the pattern: ";
		cin>>namew;
		
		struct _finddata_t fileinfo;
    	intptr_t handle = _findfirst(namew.c_str(), &fileinfo);
		
		if (handle == -1){
			cout<<"No file found with Name Wise"<<namew<<endl;
			return;
		}
			do {
        cout<<fileinfo.name<<endl;
    } while (_findnext(handle, &fileinfo) == 0);

    _findclose(handle);
}
	
	void create_directory() {
		string namedirect;
		cout<<"Enter the Directory name: ";
		cin>>namedirect;
		
		if (_mkdir(namedirect.c_str()) == 0) {
			cout<<"Directory Create Successfully"<<endl;
		}else{
			cout<<"Invalid Creating Directory!";
		}
	}
	void change_direct(){
		int choice;
		int input;
		cout<<"1. Step by Step Backward "<<endl;
		cout<<"2. Goto Root Directory"<<endl;
		cout<<"3. Forward Directory"<<endl;
		cin>>input;
	
	switch (choice) {
        case 1:
            back_ward();
            break;
        case 2:
            goto_root();
            break;
        case 3:
            for_ward();
            break;
        case 4:
            return;
        default:
            cout<<"Invalid Input."<<endl;
            break;
    }
}

void back_ward() {
    if (_chdir("..") == 0) {
        cout<<"Moved to parent directory."<<endl;
    } else {
        cout<<"Error moving to parent directory."<<endl;
    }
}

void goto_root() {
    if (_chdir("\\") == 0) {
        cout<<"Moved to root directory."<<endl;
    } else {
        cout<<"Error moving to root directory."<<endl;
    }
}

void for_ward() {
    string namew;
    cout<<"Enter the name of the directory: ";
    cin>> namew;

    if (_chdir(namew.c_str()) == 0) {
        cout<<"Moved to directory "<<namew<<"."<<endl;
    } else {
        cout<<"Error moving to directory "<<namew<<"."<<endl;
    }
}


