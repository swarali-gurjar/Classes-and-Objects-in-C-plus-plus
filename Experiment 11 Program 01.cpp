//Public class display
#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
}; 
int main()
{
    Student s1;
    s1.name = "Swarali";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.year = "Second year";
    s1.result = 8.9;

    cout << "Name: " <<s1.name<<endl;
    cout << "Branch: " <<s1.branch<<endl;
    cout << "Subject: " <<s1.subject<< endl;
    cout<<"Year: "<<s1.year<<endl;
    cout << "Result: " <<s1.result<<endl;
    return 0;
}
