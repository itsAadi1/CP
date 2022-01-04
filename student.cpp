#include<iostream> 
#include<fstream> 
using namespace std; 
class student 
{ 
 int roll; 
 char name[30]; 
 float marks1,marks2,marks3; 
 char gender; 
 public: 
 student() 
 { 
 
 }
 void getData(); 
 void displayData(); 
};
void student :: getData() 
{
 cout << "\nEnter Roll No. : "; 
 cin >> roll; 
 cout << "\nEnter Name : "; 
 cin>>name; 
 cout<<"\nEnter your gender : "; 
 cin>>gender; 
 cout << "\nEnter Marks in Test 1 : "; 
 cin >> marks1; cout<<"\nEnter Marks in Test 2 : "; 
 cin>>marks2; 
 cout<<"\nEnter Marks in Test 3 : "; 
 cin>>marks3; 
} 
void student :: displayData() 
{ 
 cout << "\nRoll No. : " << roll << endl; cout << "\nName : " << name << endl; 
 cout<<"\nGender : "<<gender<<endl; 
 cout << "\nMarks in Test 1 : " << marks1; 
 cout<<"\nMarks in Test 2 : "<<marks2; 
 cout<<"\nMarks in Test 3 : "<<marks3<<endl; 
 cout<<"Average= "<<(marks1+marks2+marks3)/3;
} 
int main() 
{ 
 student s[1]; 
 fstream file; 
 int i; 
 file.open("Student.txt", ios :: out); 
 cout << "\nEnter student Details to the File :- " << endl; 
 for (i = 0; i < 1; i++) { s[i].getData(); 
 file.write((char *)&s[i], sizeof(s[i])); 
}
file.close(); 
file.open("Student.txt", ios :: in); 
cout << "\nReading Student information to the file :- " << endl; 
for (i = 0; i < 1; i++) 
{ 
 file.read((char *)&s[i], sizeof(s[i])); 
 s[i].displayData(); 
}
file.close(); 
return 0;
}