// Copyright Aryan Zia -
#include"header.cpp"

// Initialization of Functions
// ***********************************************************
// Input                                                     *
void input(int array[][10],int students,int subjects); //    *
// Grades                                                    *
void grades(int array[][10],int i,int j,int students,int subjects);//    *
// Averages                                                  *
void avg1(int array[][10],int i,int students,int subjects);//       *
void avg2(int array[][10],int students,int subjects);//       *
// Update                                                    *
void update(int array[][10],int students,int subjects);//    *
// View Student Record                                       *
void view(int array[][10],int students,int subjects);//    *
//************************************************************
int main(){
int array[100][10];
int input1,students=0,subjects=0,a=0;
while(a==0){
    cout <<endl;
cout << "\t\t\t\t\t\t\t\tStudent Grade Management System"<<endl;
cout << "1. Student Data"<<endl;
cout << "2. Subject Record"<<endl;
cout << "3. Student Record"<<endl;
cout << "4. Update Student Record"<<endl;
cout << "5. Log Out"<<endl;

cin >> input1;
switch(input1){
    case 1:
    {
    cout << "Enter the Number of Students : "<<endl;
    cin >> students;
    cout << "Enter the Number of Subjects : "<<endl;
    cin >> subjects;
    input(array,students,subjects);
    cout << "Press 0 to return back to menu or any other number to exit"<<endl;
    cin >> a;
    break;
    }
    case 2:
    {
    if(students <= 0 || subjects <= 0){
        cout << "No Subject Data Found !";
        break;
    }
    else{
       avg2(array,students,subjects);
    cout << "Press 0 to return back to menu or any other number to exit"<<endl;
    cin >> a; 
    }
    break;
    }
    case 3:
    {
    if(students <= 0 || subjects <= 0){
        cout << "No Student Data Found !";
        break;
    }
    else{
    view(array,students,subjects);
    cout << "Press 0 to return back to menu or any other number to exit"<<endl;
    cin >> a;
    break;}
    }
    case 4:
    {
    if(students <= 0 || subjects <= 0){
        cout << "No Student Data Found !";
        break;
    }
    else{
    view(array,students,subjects);
    cout <<endl;
    update(array,students,subjects);
    cout <<endl;
    cout << "Press 0 to return back to menu or any other number to exit"<<endl;
    cin >> a;
    break;
    }
    case 5:
    {
    a=1;
    break;
    }
    default:
    cout << "Wrong Value Enter , System Shutting Down!"<<endl;

}}
}
cout <<endl;
cout << "Exiting The System , Log in Again";
return 0;
}