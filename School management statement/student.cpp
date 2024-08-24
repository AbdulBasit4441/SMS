#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int i = 0;
int fee = 2000;
int* ptrf = &fee;
struct student
{
	int id; 
	string name;
	char grade;
	float marks, per;
}s[20];
void insert() {
	system("cls");
	cout << "\n\t\t\t\t\t\t ***Insert Record*** \n\n";
label1:
	cout << "Enter Student Id: ";
	cin >> s[i].id;

	for (int a = 0; a < i; a++) {
		if (s[a].id == s[i].id) {
			int cho;
			cout << "Id already Inserted" << endl;
			cout << "Press 1 to continue" << endl;
			cout << "Press 2 to Exit";
			cin >> cho;
			switch (cho) {
			case 1:
				goto label1;
			case 2:
				goto label2;
			default:
				cout << "Invalid choice";
			}
		}
	}
	label3:
	cout << "\n\nEnter Student Name: ";
	cin.ignore();
	getline(cin, s[i].name);
	for (int a = 0; a < i; a++) {
		if (s[a].name == s[i].name) {
			int cho;
			cout << "Name already Inserted" << endl;
			cout << "Press 1 to continue" << endl;
			cout << "Press 2 to Exit";
			cin >> cho;
			switch (cho) {
			case 1:
				goto label3;
			case 2:
				goto label2;
			default:
				cout << "Invalid choice";
			}
		}
	}
	cout << "\n\nEnter Student Marks: ";
	cin >> s[i].marks;
	s[i].per = s[i].marks * 100 / 100;
	if (s[i].per >= 90) {
		s[i].grade = 'A';
	}
	else if (s[i].per >= 80) {
		s[i].grade = 'B';
	}
	else if (s[i].per >= 70) {
		s[i].grade = 'C';
	}
	else if (s[i].per >= 60) {
		s[i].grade = 'D';
	}
	else if (s[i].per >= 50) {
		s[i].grade = 'E';
	}
	else if (s[i].per < 40) {
		s[i].grade = 'F';
	}
	else {
		s[i].grade = 'F';
	}
	i++;
	cout << "\t\t\t\t\t\t ***Insert record suscessfully***" << endl << endl << endl;
label2:
;

}
void search() {
	system("cls");
	cout << "\n\n\t\t\t\t\t\t ***Search Record***";
	if (i == 0) {
		cout << "\nRecord not found";
	}
	else {
		int id, found = 0,choice;
		label6:
		cout << "\nPress 1 to search by id";
		cout << "\nPress 2 to search by name";
		cout << "\nPress 3 to search by Grade";
		cin >> choice;
		if (choice == 1) {
			cout << "\nEnter Student Id : ";
			cin >> id;
			for (int a = 0; a < i; a++) {
				if (id == s[a].id) {
					cout << "Studetn ID:" << s[a].id << endl << endl;
					cout << "Student Name:" << s[a].name << endl << endl;
					cout << "Student Marks:" << s[a].marks << endl << endl;
					cout << "Percentage:" << s[a].per << "%" << endl << endl;
					cout << "Grade: " << s[a].grade << endl;
					cout << "Paper fee: " << *ptrf << endl;
					
				}
				else {
					cout << "Id does't Exist";
					break;
				}
			}
		
		
		}
		else if (choice == 2) {
			string name;
			cout << "\nEnter Student Name : ";
			cin.ignore();
			getline(cin, name);
			for (int a = 0; a < i; a++) {
				if (name == s[a].name) {
					cout << "Studetn ID:" << s[a].id << endl << endl;
					cout << "Student Name:" << s[a].name << endl << endl;
					cout << "Student Marks:" << s[a].marks << endl << endl;
					cout << "Percentage:" << s[a].per << "%" << endl << endl;
					cout << "Grade: " << s[a].grade << endl;
					cout << "Paper fee: " << *ptrf << endl;
					found++;
				}
		else if (name != s[a].name) {
					cout << "name does't Exist";
					break;
				}
			}
		}
		else if (choice == 3 ) {
			char grade;
			cout << "ENTER YOUR GRADE : ";
			cin >> grade;
			for (int a = 0; a < i; a++) {
				if (grade == s[a].grade) {
					cout << "\nStudent Id : "<<s[a].id;
					cout << "\nStudent Name : " << s[a].name;
					cout << "\nStudent Marks : " << s[a].marks;
					cout << "\nPercentage : " << s[a].per;
					cout << "\nGrade : " << s[a].grade;
					cout << "\nPaper Fee : " << *ptrf<<endl;
					found++;
				}
			}
			}
					
		else {
			cout << "Invalid choice";
			goto label6;
		}
		
			if (found == 0) {
				cout << "\n\n\t\t\t\t\t\t ***Record Not Found***\n\n";
			}
	}
	
}
void  update() {
	system("cls");
	cout << "\n\n\t\t\t\t\t\t ***Update Record***\n";
	if (i == 0) {
		cout << "\n Record Not found "<<endl;
	}
	else {
		int id, found = 0;
		cout << "\nEnter Student Id : ";
		cin >> id;
		for (int a = 0; a < i; a++) {
			if (id == s[a].id) {
				cout << "\n\nEnter student Name : ";
				cin.ignore();
				getline(cin, s[a].name);
				cout << "\n\nEnter Student Marks: ";
				cin >> s[a].marks;
				s[a].per = s[a].marks * 100 / 100;
				if (s[a].per >= 90) {
					s[a].grade = 'A';
				}
				else if (s[a].per >= 80) {
					s[a].grade = 'B';
				}
				else if (s[a].per >= 70) {
					s[a].grade = 'C';
				}
				else if (s[a].per >= 60) {
					s[a].grade = 'D';
				}
				else if (s[a].per >= 50) {
					s[a].grade = 'E';
				}
				else if (s[a].per >= 40) {
					s[a].grade = 'F';
				}
				else {
					s[a].grade = 'F';
				}
	cout << "\n\n\t\t\t\t\t\t ***Updtae Record Sucssesfully***";
				found++;
			}
		}
	if (found == 0) {
		cout << "\n\n\t\t\t\t\t\t ***Record Not Found***\n\n";
	}
	}
}
void del() {
	system("cls");
	cout << "\n\n\t\t\t\t\t\t ***Delete Record***"<<endl;
	if (i == 0) {
		cout << "\n\n\t\t\t\t ***No Record Found***"<<endl;
	}
	else {
		int id , found = 0;;
		cout << "Enter Student Id";
		cin >> id;
		for(int a=0;a<i;a++){
		if (id == s[a].id) {
			for (int j = a; j < i - 1;j++) {
				s[j].id = s[j + 1].id;
				s[j].name = s[j + 1].name;
				s[j].marks = s[j + 1].marks;
				s[j].per = s[j + 1].per;
				s[j].grade = s[j + 1].grade;
			}
			cout << "\nDelete Record Successfully";
			found++;
			i--;
			break;
		}
	}
		if (found == 0) {
			cout << "\n\n\t\t\t\t ***Student Id not found*** ";
		}
	}

}
void show() {
	system("cls");
	cout << "\n\n\t\t\t\t\t\t ***Show All Record*** ";
		int found = 0;
	if (i == 0) {
		cout << "\nNo record found";
	}
	else {
		for (int a = 0; a < i; a++) {
			cout << "\nStudent ID: " << s[a].id;
			cout << "\nName : " << s[a].name;
			cout << "\nMarks: " << s[a].marks;
			cout << "\nPercentage : " << s[a].per<<"%";
			cout << "\nGrade: " << s[a].grade<<endl;
			cout << "Paper fee : " << *ptrf << endl;
		}
		found++;
	}
	if (found == 0) {
		cout << "\n\n\t\t\t\t ***No Record Found***";
	}
}
int main() {
	int choice;
	while(true){
	//system("cls");
		cout << "\n\t\t\t\t\t *** Welcome to Student Management System ***"<<endl<<endl<<endl;
	cout << "Press 1 for Insert record\n";
	cout << "Press 2 for Search record\n";
	cout << "Press 3 for Update record\n";
	cout << "Press 4 for Delete record\n";
	cout << "Press 5 for Show all record\n";
	cout << "Press 6 for Exit \n";
	cin >> choice;
	switch (choice) {
	case 1:
		insert();
		break;
	case 2:
		search();
		break;
	case 3:
		update();
		break;
	case 4:
		del();
		break;
	case 5:
		show();
		break;
	case 6:
		exit(0);
		break;

	default :
		cout << "Invalid Choice";
	}
	}
	return 0;
}