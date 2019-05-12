#include "headergua.h"
#include <iostream>
#define top(S) S.Top
#define elemen(S) S.elemen
using namespace std;
void createStack(Stack &s){
    top(S) = -1;
}
bool isEmpty(Stack s){
    return (top(S) == -1);
}
bool isFull(Stack s){
    return (s.Top == nMax-1);
}
void push(Stack &s, char x){
    if (!isFull(s)){
        top(S)++;
        elemen(S)[top(S)] = x;
    }
}
char pop(Stack &s){
    if (!isEmpty(s)){
        s.Top--;
        return s.elemen[s.Top+1];
    }
    return '@';
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
void printStack(Stack s){
    Stack temp;
    createStack(temp);
    int temp_int = s.Top;
    for (int i = 0; i <=temp_int; i++){
        temp.elemen[i] = s.elemen[i];
    }
    for (int i = 0; i<=temp_int; i++){
        cout << temp.elemen[i];
    }
}

int presedens(char x){
    if (x == '+' || x == '-'){
        return 3;
    }
    else if (x == '*' || x == '/'){
        return 2;
    }
    return 1;
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
