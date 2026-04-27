#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

struct Node {
    int data;
    Node * next;
    Node * prev;
};

struct double_linked_list {
    Node *head, *tail;

    void init();
    void add_front(int val);
    void add_back(int val);
    void delete_front();
    void delete_back();
    void add_idx(int val, int idx);
    void delete_idx(int idx);
    void clear();
    void display();
};


#endif