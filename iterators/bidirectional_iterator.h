#ifndef BIDIRECTIONAL_ITERATOR_H
#define BIDIRECTIONAL_ITERATOR_H

#include "../iterator.h"

template <typename T> 
class BidirectionalIterator : public Iterator<T> {
    public:
        BidirectionalIterator() : Iterator<T>() {};
        BidirectionalIterator(Node<T> *node) : Iterator<T>(node) {};

        BidirectionalIterator<T> operator=(BidirectionalIterator<T> other) {
            // Estás creando un nuevo iterador, deberías retornar el mismo
            return BidirectionalIterator<T>(other.current);
        }

        bool operator!=(BidirectionalIterator<T> other) {
            return other.current != this->current;
        }

        BidirectionalIterator<T> operator++() {
            // Falta controlar el caso cuando llegaste al final
            this->current = this->current->next;
            return *this;
        }

        BidirectionalIterator<T> operator--() {
            // Falta controlar el caso cuando estás en la cabeza
            this->current = this->current->prev;
            return *this;
        }

        T operator*() {
            // Aquí si sería necesario controlar un throew
            return this->current->data;
        }
};

#endif