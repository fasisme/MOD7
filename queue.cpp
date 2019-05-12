#include "queue.h"
#include <iostream>
using namespace std;
void createQueue(Queue &q){
    q.Head = -1;
    q.Tail = -1;
}
bool isEmpty(Queue q){
    return (q.Head == -1);
}
bool isFull(Queue q){
    if (q.Head == 0 && q.Tail ==nMax-1){
        return true;
    }
    else if (q.Head == q.Tail+1){
        return true;
    }
    return false;
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
void enQueue(Queue &q,int x){
    if (!isFull(q)){
        if (q.Tail == 4){
            q.Tail = 0;
            q.elemen[q.Tail] = x;
        }
        else{
            q.elemen[++q.Tail] = x;
            if (q.Head == -1){
                q.Head = 0;
            }
        }
    }
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
int deQueue(Queue &q){
    if (!isEmpty(q)){
        int temp = q.elemen[q.Tail];
        if (q.Head == q.Tail){
            createQueue(q);
        }
        else if (q.Head < q.Tail){
            q.Head++;
        }
        else{
            if (q.Head == nMax-1){
                q.Head = 0;
            }
            else{
                q.Head++;
            }
        }
        return temp;
    }
    return '@';
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
void printQueue(Queue q){
    if (!isEmpty(q)){
        int i = q.Head;
        while (i != q.Tail){
            cout << q.elemen[i] << " ";
            if (i == 4){
                i = 0;
            }
            else{
                i++;
            }
        }
        cout << q.elemen[i];
    }
    cout << endl;
}// Nama : Heri Setyo Nugroho  NIM : 1301184382
