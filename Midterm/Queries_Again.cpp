#include <iostream>

// Definition for doubly linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Function to insert a value at a given index in the doubly linked list
void insertAtIndex(Node*& head, int index, int value) {
    Node* newNode = new Node(value);

    if (index == 0) {
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
    } else {
        Node* current = head;
        int count = 0;

        while (current != nullptr && count < index - 1) {
            current = current->next;
            count++;
        }

        if (current == nullptr) {
            std::cout << "Invalid" << std::endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != nullptr) {
            current->next->prev = newNode;
        }

        current->next = newNode;
    }
}

// Function to print the doubly linked list from left to right
void printLeftToRight(Node* head) {
    std::cout << "L -> ";
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to print the doubly linked list from right to left
void printRightToLeft(Node* tail) {
    std::cout << "R -> ";
    while (tail != nullptr) {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
    std::cout << std::endl;
}

int main() {
    // Initialize an empty doubly linked list
    Node* head = nullptr;

    // Input the number of queries
    int Q;
    std::cin >> Q;

    // Process each query
    for (int i = 0; i < Q; ++i) {
        int X, V;
        std::cin >> X >> V;

        // Insert the value at the given index
        insertAtIndex(head, X, V);

        // Print the doubly linked list from left to right
        printLeftToRight(head);

        // Find the tail of the doubly linked list
        Node* tail = head;
        while (tail != nullptr && tail->next != nullptr) {
            tail = tail->next;
        }

        // Print the doubly linked list from right to left
        printRightToLeft(tail);
    }

    // Free memory: deallocate the nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
