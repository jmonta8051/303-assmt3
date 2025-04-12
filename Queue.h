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
    
    T get_data() { return this->data; }

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
        if (head == nullptr)
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

    // Moves first to last
    void move_to_rear()
    {
        if (empty() || tail == head) { return; }

        Node* temp = pop();
        push(temp->data);
    }

    // Prints Queue
    void print()
    {
        Queue<T>* temp = new Queue();

        while (!empty())
        {
            Node* item = pop();
            temp->push(item->data);
            std::cout << item->data << " ";
        }
        std::cout << "\n";
        
        while (!temp->empty())
        {
            push(temp->pop()->data);
        }
    }
};