#ifndef GENERIC_STACK_H
#define GENERIC_STACK_H

template<typename T>

#define SUCCESS_OPERATION 1
#define FAILURE_OPERATION 0

class Stack{

public:
    Stack(int size = 10) {
        SSIZE = size >0 && size <1000 ? size : 10;
        top = -1;
        Buffer = new T[SSIZE];
    }

    ~Stack() {
        delete[] Buffer;
    }
    int isEmpty() const {   return top == -1;}
    int isFull() const {   return top == SSIZE -1;}

    int push(const T& data) {
        if (!isFull()) {
            Buffer[++top] = data;
            return SUCCESS_OPERATION;
        }
        return FAILURE_OPERATION;
    }
    int pop(T& data) {
        if (!isEmpty()) {
            data = Buffer[top--];
            return SUCCESS_OPERATION;
        }
        return FAILURE_OPERATION;
    }
    
private:
    T* Buffer;
    int top;
    int SSIZE;
};

#endif