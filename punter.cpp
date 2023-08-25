#include <iostream>

struct Node {
    int data;
    Node* next;
};
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }
    void append(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList myList;

    myList.append(3);
    myList.append(7);
    myList.append(1);
    myList.append(9);
    myList.append(4);
    myList.append(6);
    myList.append(2);
    myList.append(5);

    std::cout << "Lista enlazada: ";
    myList.display();

    return 0;
}
