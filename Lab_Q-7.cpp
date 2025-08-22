#include <iostream>
using namespace std;
class Student {
    int age ;
    int std;
    string firstname;
    string lastname;

    public:
        void set_age(int n){
            age = n ;
        }
        void set_standard(int n){
            std = n;
        }
        void set_first_name(string first_name){
            firstname = first_name;
        }
        void set_last_name(string last_name){
            lastname = last_name;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return std;
        }
        string get_first_name(){
            return firstname;
        }
        string get_last_name(){
            return lastname;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<"\n Entered student details are as follows: ";
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    
    return 0;
}
