#include <iostream>

#pragma once

namespace lista
{
    template<class TE>
    class Elemento
    {
        private:
            TE* info;
            Elemento<TE>* next;
            Elemento<TE>* prev;
        public:
            Elemento();
            ~Elemento();

            void setInfo(const TE* i) { info = i; };
            void setNext(const Elemento<TE>* n) { this->next = n; };
            void setPrev(const Elemento<TE>* p) { this->prev = p; };

            const TE* getInfo() { return info; };
            const Elemento<TE>* getNext() { return next; };
            const Elemento<TE>* getPrev() { return prev; };
    };

    template<class TE> Elemento<TE>::Elemento() : 
        info(nullptr), next(nullptr), prev(nullptr)
    {
    }
    template<class TE> Elemento<TE>::~Elemento()
    {
    }


};