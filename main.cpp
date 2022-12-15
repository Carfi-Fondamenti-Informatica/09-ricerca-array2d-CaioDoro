#include <iostream>
#include "lib.h"
using namespace std;

bool match(const char *ptr1, const char* ptr2);

int main (){
    char N[10][20];
    char C;

    cout << "escreve os alunos" << endl;

    for (int i=0; i<10; i++) {
        cin >> N[i];
    }
    cout << "escreve o alvo" << endl;
    char M[0][20];
    cin >> M[0][20];
    for (int i=0; i<10; i++) {
        if (match(N[i], M[0])) {
            cout << "presente" << endl;
            break;
        } else
            cout << "ausente" << endl;
        break;
    }

    return 0;}
