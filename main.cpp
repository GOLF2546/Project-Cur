#include<iostream>
#include"Subject.cpp"
#include"StudyMap.cpp"
#include"Curriculum.cpp"
using namespace std;

void studyMap(){
    StudyMap();
}

string search(){
    return "Search";
}

string plan(){
    return "Plan";
}

int main(){
     
    int command=0;
    int y,s;
    cout<<"\t\t\t\t\t\tCurriculum Management\n";
    cout<<"Please select\n";
    cout<<"\t1.Show Map\n\t2.Curriculum\n";
    cout<<"Input number : ";
    cin>>command;
    // cin.ignore();
    if(command==1)studyMap();
    if(command==2){
        cout<<"Form to input Year Semester" << endl;
        cout<<"Input Year and Semester : ";
        cin >> y;
        cin >> s;
        ShowCu(y,s);
    }   
    return 0;
}