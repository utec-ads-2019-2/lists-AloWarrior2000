#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../iterator.h"

template <typename T> 
class ForwardIterator : public Iterator<T> {
    public:
        ForwardIterator() : Iterator<T>() {};
        explicit ForwardIterator(Node<T> *node) : Iterator<T>(node) {};

        ForwardIterator<T> operator=(ForwardIterator<T> other) {
            // Estás creando un nuevo iterador, deberías retornar el mismo
            return ForwardIterator(other.current);
        }

        bool operator!=(ForwardIterator<T> other) {
            return this->current!=other.current;
        }

        ForwardIterator<T> operator++() {
            // Mismos casos a la bidirectional
            this->current = this->current->next;
            return *this;
        }

        T operator*() {
            // Mismos casos a la bidirectional
            return this->current->data;
        }
};

#endif