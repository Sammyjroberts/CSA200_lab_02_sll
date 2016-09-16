#include "AnyList.h"

//overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const AnyList l)
{
    Node *traverser = l.first;
    while(traverser != nullptr) {
        os << traverser->getData() << " ";
        traverser = traverser->getLink();
    }
    return os;
}

//default constructor
AnyList::AnyList() {
    first = nullptr;
    last = nullptr;
    count = 0;
}
// copy constructor
AnyList::AnyList(const AnyList &list) {
    count = list.count;
    if(list.first != nullptr) {
        this->first = new Node(list.first->getData(),nullptr);
        Node *traverser = list.first->getLink();
        Node *copier = first;
        while(traverser != nullptr) {
            copier->setLink(new Node(traverser->getData(),nullptr));
            copier = copier->getLink();
            last = copier;
            traverser = traverser->getLink();
        }
    }
}

//insert
void AnyList::insert(const int data) {
    if(first == nullptr) {
        first = new Node(data, nullptr);
        last = first;
        count++;
    }
    else if(count % 2 != 0) {
        last->setLink(new Node(data,nullptr));
        last = last->getLink();
        count++;
                      
    }
    else {
        Node *temp = first;
        first = new Node(data, temp);
        count++;
        
    }
}
//overloaded assignment operator
AnyList& AnyList::operator=(const AnyList& other) {
    this->clear();  // call own destructor
    *this = AnyList(other);
    return *this;
}

//clear
void AnyList::clear() {
    if(first != nullptr) {
        Node *traverser = first;
        while(traverser != nullptr) {
            count--;
            Node *temp = traverser;
            traverser = traverser->getLink();
            delete temp;
            temp = nullptr;
        }
        first = nullptr;
        last = nullptr;
        traverser = nullptr;
    }
}
//destructor
AnyList::~AnyList() {
    this->clear();
}