#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int key;
    Node* next;

    Node(int key) {
        this->key = key;
        this->next = nullptr;
    }
};

class LISCH {
private:
    int size;
    vector<Node*> hash_table;

public:
    LISCH(int size) {
        this->size = size;
        this->hash_table.resize(size, nullptr);
    }

    int hashFunction(int key) {
        return key % 11;
    }

    void insert(int key) {
        Node* node = new Node(key);
        int index = hashFunction(key);

        if (hash_table[index] == nullptr) {
            hash_table[index] = node;
        } else {
            // Find the next available slot
            while (hash_table[index]->next != nullptr) {
                index = (index + 1) % size;
            }

            hash_table[index]->next = node;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Index " << i << ": ";

            Node* node = hash_table[i];
            while (node != nullptr) {
                cout << node->key << " -> ";
                node = node->next;
            }

            cout << "None" << endl;
        }
    }
};

int main() {
    LISCH table(11);

    int keys[] = {100, 10, 19, 13, 65, 27, 77, 113, 24, 6, 21};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < numKeys; i++) {
        table.insert(keys[i]);
    }

    table.display();

    return 0;
}
