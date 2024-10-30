#include <iostream>
#include "elemento.hpp"

#pragma once

namespace listas
{
    template <class TL>
    class lista {
        private:
            Elemento<TL>* head;
            Elemento<TL>* tail;

            unsigned int size;

        public:
            lista();
            ~lista();

            void push_back(TL* pElem);
            void pop(TL* pElem);

            const unsigned int getSize() { return size; };
            void setSize(const int s) { this->size = s; };

            const Elemento<TL>* getHead() { return head; };
            const Elemento<TL>* getTail() { return tail; };

            void setHead(Elemento<TL>* h) { this->head = h; };
            void setTail(Elemento<TL>* t) { this->tail = t };

            void limpaLista();
    };

    template<class TL>lista<TL>::lista() :
        head(nullptr), tail(nullptr), size(0)
    {
    }

    template<class TL>lista<TL>::~lista() { limpaLista(); }

    template<class TL> void lista<TL>::push_back (TL* pElem)
    {
        if(pElem == nullptr)
        {
            std::cout << "ERRO AO ADICIONAR UM ELEMENTO NULO." << std::endl;
            fflush(stdin);
            exit(1);
        }

        Elemento<TL> newEle = new Elemento<TL>();

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

    template<class TL> void lista<TL>::pop (TL* pElem)
    {
        if(pElem == nullptr)
        {
            std::cout << "ERRO AO REMOVER ELEMENTO NULO." << std::endl;
            fflush(stdin);
            exit(1);
        }

        Elemento<TL> aux1 = this->getHead();
        Elemento<TL> aux2 = nullptr;

        while(aux1 != nullptr && aux1->getInfo() != pElem)
        {
            aux2 = aux1;
            aux1 = aux1->getNext();
        }

        if(aux1->getInfo() != pElem)
        {
            std::cout << "Elemento não localizado na lista." << std::endl;
        }

        if(aux1->getInfo() == this->getHead()->getInfo())
        {
            if(this->getHead()->getNext() == nullptr)
            {
                delete(aux1);
            }

            aux2 = this->getHead()->getNext();
            aux2->setPrev(this->getTail());
            delete(aux1);
        }

        if(aux1->getInfo() == this->getTail()->getInfo())
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


    template<class TL> void lista<TL>::limpaLista()
    {
        Elemento<TL> aux1 = this->getHead();
        Elemento<TL> aux2 = nullptr;


        while(aux1->getNext() != nullptr)
        {
            TL* elemRemovido = aux1->getInfo();
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
