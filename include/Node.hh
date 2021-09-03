#include<iostream>
#include "Node.hh"
#Pragma once


class Node
{
     private:
      int data;
      Node *next = NULL;
    public:
      Node(int data, Node *next);
      ~Node();
      Add(Node &stack, int value);
}


Node::Node(int data, Node *next)
{
    this->data = data;
    this->next = next;
}

Node::~Node()
{
    
};
