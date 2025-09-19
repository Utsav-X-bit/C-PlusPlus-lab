//  WAP to create a class that will maintain the 
// records of person with details (Name and Age) and find the eldest among them. 
// The program must use this pointer to return 
// the name of the elder person by overloading> operator among two objects.

#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        int age;
        string name;
        Person(){}
        Person(int a, string b) : age(a), name(b) {} 
        Person operator>(const Person& obj){   
            return (this->age > obj.age) ? *this : obj ; 
        }
};

int main(){
    Person p1(60,"Tanmay"), p2(20,"Utsav");
    string name = p1 > p2;
    cout << name;
}