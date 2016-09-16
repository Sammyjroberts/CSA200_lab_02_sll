#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>

class Node
{
public:
	Node() : data(0), link(nullptr){}
    Node(int theData, Node *theLink) : data(theData), link(theLink){}
    Node* getLink( ) const { return link; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setLink(Node *theLink) { link = theLink; }
private:
    int data;		
    Node *link;	//pointer that points to next node
};


class AnyList
{
    friend std::ostream& operator<<(std::ostream& os, const AnyList l);

public:
    //overloaded operator
    AnyList& operator=(const AnyList& other);
    //default constructor
    AnyList();
    ~AnyList();
    //copy constructor
    AnyList(const AnyList &list);
    //insert function
    void insert(const int data);
    void clear();
private:
	Node *first; //pointer to point to the first node in the list
	Node *last;  //pointer to point to the last node in the list
	int count;	 //number of nodes in the list
};

#endif