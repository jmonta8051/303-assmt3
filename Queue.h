#pragma once

#include <iostream>

template <typename T>
class Queue {
private:
    // Node structure
    struct Node {
        T data;
        Node* next;
    };
    
    Node* head;
    Node* tail;
    int size;

public:
    // Constructor
    Queue() 
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
    
    // Add to front
    void push(T value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;

        head = newNode;
        if (tail == nullptr) { tail = newNode; }

        size++;
    }
    
    // Remove from back
    Node* pop() 
    {
        if (head == tail)
        {
            return nullptr;
        }

        Node* iter = head;

        if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
            size--;
            return iter;
        }

        while (iter->next != tail) { iter = iter->next; }

        Node* temp = iter->next;
        iter->next = nullptr;
        tail = iter;
        size--;
        return temp;
    }
    
    // Access front element
    Node* front() 
    {
        return head;
    }

    // Check if empty
    bool empty() 
    {
        return size == 0;
    }
    
    // Get size
    int get_size() 
    {
        return size;
    }

    void move_to_rear()
    {
        Node* temp = head;
        pop();

    }

    // Prints Queue
    void print()
    {
        T values[size];

        Node* iter = head;
        int i = 0;

        while (iter != nullptr)
        {
            // Adds values in first to last order.
            values[size - 1 - i] = iter->data;
            iter = iter->next;
            i++;
        }

        for (auto j : values)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
};