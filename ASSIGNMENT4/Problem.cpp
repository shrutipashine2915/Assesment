/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Person{
    public:
    string name,gender;
    int age;
    
    
    int introduce(){
        cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Enter Your Age:";
        cin>>age;
        cout<<"Enter Your Gender:";
        cin>>gender;
        
        cout<<"Hello!! My name is:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
    
};

class Student:public Person{
    public:
    int SID;
    
    int display(){
        cout<<"Enter Your StudentID:";
    cin>>SID;
        
        cout<<"Student ID:"<<SID<<endl;
    }
};

class Teacher:public Person{
    public:
    string subject;
    
    int display1(){
        cout<<"Enter the subject:";
    cin>>subject;
        cout<<"Subject:"<<subject<<endl;
    }
};


int main()
{
    Student obj;
    cout<<obj.introduce();
    cout<<obj.display();
    Teacher obj1;
    cout<<obj1.introduce();
    cout<<obj1.display1();

    return 0;
}
