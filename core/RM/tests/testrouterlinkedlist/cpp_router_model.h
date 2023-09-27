#include <iostream>
#include <vector>


using namespace std;

struct node{
    bool has_parent = false;
    bool has_child = false;
    bool valid = false;
    uint32_t idx;
    uint32_t parent;
    uint32_t child;
};


class RouterLinkedList{
private:
    int head;
    int tail;
    uint32_t list_len;
    uint32_t mask_set_this_cycle=0;
    uint32_t find_free_slot();
    uint32_t find_next_valid_child(uint32_t idx, uint32_t reset_mask);
    uint32_t find_next_valid_parent(uint32_t idx, uint32_t reset_mask);
    bool queue_empty();

public:
    vector <node *> list;
    vector <node *> listtmp;
    RouterLinkedList(int num_lanes);
    ~RouterLinkedList();
    void add_instruction(uint32_t next_idx);
    void reset_instructions(uint32_t reset_mask);
    void print_current_list();
};


