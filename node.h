#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    void killSelf() {
        // TODO
    }
};

#endif