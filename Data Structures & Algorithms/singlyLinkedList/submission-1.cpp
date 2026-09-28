
class Node {
   public:
    int value;
    Node* next;

    Node(int value) : value(value), next(nullptr) {};
    Node(int value, Node* next) : value(value), next(next) {}
};

class LinkedList {
   private:
    Node* head;
    Node* tail;

   public:
    LinkedList() {
        head = new Node(-1);
        tail = head;
    }

    int get(int index) {
        Node* current = head->next;
        int i = 0;
        while (current != nullptr) {
            if (i == index) {
                return current->value;
            }
            i++;
            current = current->next;
        }

        return -1;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head->next;
        head->next = newNode;
        if (newNode->next == nullptr) {
            tail = newNode;
        }
    }

    void insertTail(int val) {
        tail->next = new Node(val);
        tail = tail->next;
    }

    bool remove(int index) {
        int i = 0;
        Node* current = head;
        while (i < index && current != nullptr) {
            i++;
            current = current->next;
        }

        if (current != nullptr && current->next != nullptr) {
            if (current->next == tail) {
                tail = current;
            }
            Node* toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> res;
        Node* curr = head->next;
        while (curr != nullptr) {
            res.push_back(curr->value);
            curr = curr->next;
        }
        return res;
    }
};

