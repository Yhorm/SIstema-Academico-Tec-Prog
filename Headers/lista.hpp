#include <iostream>
#include "elemento.hpp"

#pragma once

namespace lista
{
    template <class E> 
    class lista {
        private:
            Elemento<E>* head;
            Elemento<E>* tail;

            unsigned int size;

        public:
            lista();
            ~lista();

            void AddElemento(const E* pElem );
            void removeElemento(const E* pElem);

            const unsigned int getSize() { return size; };
            void setSize(const int s) { this->size = s; };

            const Elemento<E>* getHead() { return head; };
            const Elemento<E>* getTail() { return tail; };

            void setHead( const Elemento<E>* h) { this->head = h; };
            void setTail( const Elemento<E>* t) { this->tail = t };

            void limpaLista();
    };

    template<class E>lista<E>::lista() :
        head(nullptr), tail(nullptr), size(0)
    {
    }

    template<class E>lista<E>::~lista() { limpaLista(); }

    template<class E> void lista<E>::AddElemento (const E* pElem)
    {
        if(pElem == nullptr)
        {
            std::cout << "ERRO AO ADICIONAR UM ELEMENTO NULO." << std::endl;
            fflush(stdin);
            exit(1);
        }
        
        Elemento<E> newEle = new Elemento<E>();

        if(newEle == nullptr)
        {
            cout << "ERRO AO CRIAR ELEMENTO NA LISTA" << std::endl;
            fflush(stdin);
            exit(1);
        }

        newEle->setInfo(pElem);
        newEle->setNext(nullptr);
        newEle->setPrev(nullptr);
        
        if(head == nullptr)
        {
            this->setHead(newEle);
            this->setTail(newEle);
        }
        else 
        {
            this->tail->setNext(newEle);
            newEle->setPrev(this->tail);
            this->setTail(newEle);
        }

        this->setSize(size++);
    }

    template<class E> void lista<E>::removeElemento (const E* pElem)
    {
        if(pElem == nullptr)
        {
            std::cout << "ERRO AO REMOVER ELEMENTO NULO." << std::endl;
            fflush(stdin);
            exit(1);
        }

        Elemento<E> aux1 = this->getHead();
        Elemento<E> aux2 = nullptr;

        while(aux1 != nullptr && aux1->getInfo() != pElem) 
        {
            aux2 = aux1;
            aux1 = aux1->getNext();
        }

        if(aux1->getInfo() != pElem)
        {
            std::cout << "Elemento não localizado na lista." << std::endl;
        }

        if(aux1->getInfo() == this->getHead() )
        {
            if(this->getHead()->getNext() == nullptr)
            {                   
                delete(aux1);
            }

            aux2 = this->getHead()->getNext();
            aux2->setPrev(this->getTail());        
            delete(aux1);
        }

        if(aux1->getInfo() == this->getTail())
        {
            if(this->getTail()->getPrev() == nullptr)
            {
                delete(aux1);
            }

            aux2 = this->getTail()->getPrev();
            aux2->setNext(nullptr);
            delete(aux1);
        }

        aux2 = aux1->getPrev();
        aux2->setNext(aux1->getNext());
        delete(aux1);
    }


    template<class E> void lista<E>::limpaLista() 
    {
        Elemento<E> aux1 = this->getHead();
        Elemento<E> aux2 = nullptr;


        while(aux1->getNext() != nullptr)
        {
            E* elemRemovido = aux1->getInfo();
            if(elemRemovido != nullptr)
            {
                delete(elemRemovido);
                elemRemovido = nullptr;
            }

            aux2 = aux1->getNext();
            delete(aux1);
            aux1 = aux2;
        }

        this->setHead(nullptr);
        this->setTail(nullptr);
        this->setSize(0);
        
    };

};