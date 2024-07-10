#include <iostream>
#include <fstream>
using namespace std;


//serialization
class Student {
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ifstream & operator>>(ifstream &ifs, Student &s) { //to object Student &s prepei na einai reference alliws den 8a ginetai updated
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}
ofstream & operator<<(ofstream &ofs, Student &s) {
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main() {
    Student s1;
    s1.name = "John";s1.branch="CS";
    ofstream ofs("Student.txt", ios::trunc );
    // ofs<<s1.name<<endl;
    // ofs<<s1.roll<<endl;
    // ofs<<s1.branch<<endl;

    //ofs<<s1; //auto den ginetai

    ofs<<s1;
    ofs.close();

    ifstream

    // ofstream ofs("My.txt", ios::trunc);
    // ofs<<"John"<<endl;
    // ofs<<23<<endl;
    // ofs<<"cs"<<endl;
    // ofs.close();

    //ifstream ifs("My.txt");
    // ifstream ifs;
    // ifs.open("My.txt");
    // //if (ifs)cout<<"File is opened"<<endl;
    // if (ifs.is_open())cout<<"File is opened"<<endl;
    // string name;
    // int roll;
    // string branch;
    // ifs>>name>>roll>>branch;
    // ifs.close();
    // cout<<"Name  "<<name<<endl;
    // cout<<"Roll  "<<roll<<endl;
    // cout<<"Branch  "<<branch<<endl;

};