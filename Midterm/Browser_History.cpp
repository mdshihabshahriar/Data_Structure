#include <iostream>
#include <list>

// Definition for doubly linked list node
struct Node {
    std::string data;
    Node* next;
    Node* prev;

    Node(const std::string& value) : data(value), next(nullptr), prev(nullptr) {}
};

int main() {
    // Input values into the doubly linked list
    std::list<Node*> linkedList;
    std::string value;
    while (true) {
        std::cin >> value;
        if (value == "end") {
            break;
        }
        linkedList.push_back(new Node(value));
    }

    // Input the number of queries
    int Q;
    std::cin >> Q;

    // Process each query
    for (int i = 0; i < Q; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "visit") {
            std::string address;
            std::cin >> address;

            // Find the address in the linked list without using find_if
            bool found = false;
            for (Node* node : linkedList) {
                if (node->data == address) {
                    found = true;
                    std::cout << address << std::endl;
                    break;
                }
            }

            if (!found) {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "next") {
            // Move to the next address
            auto it = linkedList.begin();
            while (it != linkedList.end() && *it != *linkedList.rbegin()) {
                if (*it == *linkedList.rbegin()) {
                    std::cout << "Not Available" << std::endl;
                    break;
                }
                ++it;
            }
            if (it != linkedList.end() && std::next(it) != linkedList.end()) {
                std::cout << (*std::next(it))->data << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "prev") {
            // Move to the previous address
            auto it = linkedList.begin();
            while (it != linkedList.end() && *it != *linkedList.rbegin()) {
                if (*it == *linkedList.rbegin()) {
                    std::cout << "Not Available" << std::endl;
                    break;
                }
                ++it;
            }
            if (it != linkedList.end() && it != linkedList.begin()) {
                --it;
                std::cout << (*it)->data << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        }
    }

    // Free memory: deallocate the nodes
    for (Node* node : linkedList) {
        delete node;
    }

    return 0;
}
