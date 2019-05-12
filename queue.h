#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
const int nMax = 5;
typedef int infotype[nMax];
struct Queue{
    infotype elemen;
    int Head;
    int Tail;
};// Nama : Heri Setyo Nugroho  NIM : 1301184382
void createQueue(Queue &q);
bool isEmpty(Queue q);
bool isFull(Queue q);
void enQueue(Queue &q,int x);
int deQueue(Queue &q);
void printQueue(Queue q);
#endif // QUEUE_H_INCLUDED
