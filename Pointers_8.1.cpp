#include<iostream>
#include<conio.h>
int *marks;
int *rollno;
using namespace std;
int main(){
    int size;
    cout << "How many students are there in the class"<< endl;
    cin >> size;
    rollno = new int[size];
    marks = new int[size];
    
    if ((!rollno) || (!marks)){
        cout << "NO Memory! Aborting!";
        return 1;
    }

    for(int i=0; i<size ;i++){
        cout << "Enter rollno and marks for student "<< (i+1)<< endl;
        cin >> rollno[i] >> marks[i];
    }

    cout << "\tRoll no \tMarks\n";
    for(int j=0; j< size; j++){
        cout<<"\t"<< rollno[j] << "\t\t" << marks[j]<< "\n";
    }
    delete[]rollno;
    delete[]marks;
    getch();
    return 0;
}