#include <iostream>
#include "queue.h"
using namespace std;
int main(){
    Queue q;
    createQueue(q);
    if (isEmpty(q)){
        cout << "Queue kosong\n";
    }
    else{
        cout << "Queue tidak kosong\n";
    }
    if (isFull(q)){
        cout << "Queue penuh\n";
    }
    else{
        cout << "Queue tidak penuh\n";
    }// Nama : Heri Setyo Nugroho  NIM : 1301184382
    enQueue(q,7);
    cout << "Add 7\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,9);
    cout << "Add 9\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    int temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,0);
    cout << "Add 0\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,4);
    cout << "Add 4\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,8);
    cout << "Add 8\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,1);
    cout << "Add 1\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,3);
    cout << "Add 3\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,7);
    cout << "Add 7\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,2);
    cout << "Add 2\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,10);
    cout << "Add 10\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,10);
    cout << "Add 10\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    temp = deQueue(q);
    cout << "Del  \t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    enQueue(q,5);
    cout << "Add 5\t" << "head =" << q.Head << " tail = " << q.Tail << "\tQueque: "; printQueue(q);
    if (isFull(q)){
        cout << "Queue penuh\n";
    }
    else{
        cout << "Queue tidak penuh\n";
    }
    return 0;
}
