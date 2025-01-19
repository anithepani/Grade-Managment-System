#include<iostream>
#include<cmath>

using namespace std;
// void grades(int array[][10],int i,int j,int students,int subjects);
// **************************************************
// Input Marks of Students Into The Array
// **************************************************
void input(int array[][10],int students,int subjects){
    int marks;
    for(int i =0;i<students;i++){
        cout << "Student " <<i+1 << ":"<<endl;
        for(int j =0;j<subjects;j++){
            cout << "Enter Marks of Subject "<<j+1 << ":"<<endl;
            cin >> marks;
            if(marks > 100 || marks < 0){
                cout << "Invalid Marks , Exiting The System !";
                exit(0);
            }
            array[i][j] = marks;
        }
        array[i][subjects] = '\0';
    }
}
// ***************************************************
// Output Of Students Subject Wise Grade
// ***************************************************
void grades(int array[][10],int i,int j,int students,int subjects){
        int marks = array[i][j];
            if(marks>=90){
                cout << "|A";
            }
            else if(marks>=80){
                cout << "|B";
            }
            else if(marks>=70){
                cout << "|C";
            }
            else if(marks>=60){
                cout << "|D";
            }
            else{
                cout << "|F";
            }
        }
// *********************************************************
// Calculation Of Average Student Grade
// *********************************************************
void avg1(int array[][10],int i,int students,int subjects){
        int sum = 0,avg;
        for(int j =0;j<subjects;j++){
            sum += array[i][j];
        }
        avg = (sum/subjects);
         if(avg>=90){
                cout << "A"<<endl;
            }
            else if(avg>=80){
                cout << "B"<<endl;
            }
            else if(avg>=70){
                cout << "C"<<endl;
            }
            else if(avg>=60){
                cout << "D"<<endl;
            }
            else{
                cout << "F"<<endl;
            }
    }
void avg2(int array[][10],int students,int subjects){
    // **********************************************************
    // Calculation Of Average Subject Grade
    // **********************************************************
        cout << "\t\tGrades";
        cout <<endl;
        // old
        for(int i =0;i<subjects;i++){
        cout << "Subject[" <<i+1 << "]";
        int sum=0,avg;
        for(int j =0;j<students;j++){
            sum += array[j][i];
        }
        avg = (sum/students);
         if(avg>=90){
                cout << "\t  A"<<endl;
            }
            else if(avg>=80){
                cout << "\t  B"<<endl;
            }
            else if(avg>=70){
                cout << "\t  C"<<endl;
            }
            else if(avg>=60){
                cout << "\t  D"<<endl;
            }
            else{
                cout << "\t  F"<<endl;
            }
        cout <<endl;
    }
}
// **************************************************
// Updating Marks of Students
// **************************************************
void update(int array[][10],int students,int subjects){
    int choice_student,choice_subject,update;
    cout << "List of Students : "<<endl;
    for(int i =0;i<students;i++){
        cout <<i+1 <<". Student " << i+1<<endl;
    }
    cout << "Choose the student :";
    cin >> choice_student;
    if(choice_student <= 0 || choice_student > students){
        cout << "Invalid Student Choice";
    }
    else{
        for(int i=0;i<students;i++){
            if(choice_student-1 == i){
                cout << "Choose the Subject : "<<endl;
                for(int j = 0;j<subjects;j++){
                    cout << j+1 << ". Subject "<<j+1<<endl;
                }
                cin >> choice_subject;
                if(choice_subject <= 0 || choice_subject > subjects){
                cout << "Invalid Subject Choice";
                }
                else{
                    for(int j = 0;j<subjects;j++){
                        if(choice_subject-1 == j){
                            cout << "Enter the New Marks : ";
                            cin >> update;
                            array[i][j] = update;
                        }
                    }
                }
            }
        }
    }
}
// **************************************************
// Viewing Marks Of Students
// **************************************************
void view(int array[][10],int students,int subjects){
    cout << "\t";
    for(int i = 0;i<subjects;i++){
        cout << "\tSubject["<<i+1<<"]";
    }
        cout << "\tGrades";
    cout <<endl;
    for(int i =0;i<students;i++){
        cout << "Student[" <<i+1 << "]";
        for(int j =0;j<subjects;j++){
            cout <<"\t  " <<array[i][j];
            grades(array,i,j,students,subjects);
            cout << "\t";
        }
        cout << "\t  ";
        avg1(array,i,students,subjects);
        cout <<endl;
    }
}
