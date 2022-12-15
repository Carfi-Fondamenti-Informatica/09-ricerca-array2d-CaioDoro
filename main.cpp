#include <iostream>
using namespace std;

bool match(const char *ptr1, const char* ptr2);

int main (){
    char N[10][20];
    char C;


    for (int i=0; i<10; i++) {
        cin >> N[i];
    }
    
    char M[0][20];
    cin >> M[0][20];
    for (int i=0; i<10; i++) {
        if (match(N[i], M[0])) {
            cout << i << endl;
            break;
        } else
            cout << "non presente" << endl;
        break;
    }

    return 0;}
