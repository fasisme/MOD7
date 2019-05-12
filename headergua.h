#ifndef HEADERGUA_H_INCLUDED
#define HEADERGUA_H_INCLUDED
const int nMax = 100;
typedef char infotype[nMax];
struct Stack{
    infotype elemen;
    int Top;
};
void createStack(Stack &s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void push(Stack &s, char x);
char pop(Stack &s);
void printStack(Stack s);
int presedens(char x);
#endif // HEADERGUA_H_INCLUDED

