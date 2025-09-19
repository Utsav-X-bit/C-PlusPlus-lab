// Program to demonstrate the unary operator overloading for operator ++.
// Make a class test. Create a default constructor to initialize the variable. 
// 1) Overload operator ++ (Pre) with definition to pre-decrement the 
// value of a variable 2) Overload operator ++ (post) 
// with definition to post-decrement the value of variable.

#include<iostream>

using namespace std;

class Test{
    public:
        int a;
        Test(int a1): a(a1) {}
        Test() {}
        int operator ++(){
            this->a = this->a + 1 ;
            return this->a;
        }
        int operator ++(int){
            int b = this->a ;
            this->a = this->a + 1 ;
            return b;
        }
};

int main(){
    Test p(10), q(10);
    cout << "Post Increment: " << p++ << endl;
    cout << "Pre Increment: " << ++q << endl;

    return 0;
}