#include<iostream>
#include"StudyMap.cpp"
#include"Curriculum.cpp"
#include"Edit.cpp"
using namespace std;
vector<course> F1;
int Start_program(){
    int command=0;
    int y,s;
    cout<<"\t\t\t\t\t\tCurriculum Management\n";
    cout<<"Please select\n";
    cout<<"\t1.Show Map\n\t2.Curriculum\n\t3.Edit\n";
    cout<<"Input number : ";
    cin>>command;
    if(command==1) StudyMap();
    if(command==2){
        cout<<"Form to input Year Semester" << endl;
        cout<<"Input Year and Semester : ";
        cin >> y;
        cin >> s;
        ShowCu(y,s);
    }   
    if(command==3){
        readfile(F1);
        int total = printreport(F1);
        cout << "Total credit : " << total << endl;
    }
    return 0;
}