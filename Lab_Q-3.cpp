//  WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.
#include <iostream>
using namespace std;

int main(){
    int A[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int i,j;
    cin >> i >> j;
    cout << reinterpret_cast<unsigned long long>(A + sizeof(int) * (5*(i - 0) + (j - 0)));
    return 0;
}