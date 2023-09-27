#include "cpp_router_model.h"


RouterLinkedList::RouterLinkedList(int num_lanes){
    for(int i=0; i<num_lanes; i++){
        node *n = new node;
        n->idx = i;
        list.push_back(n);        
    }
    head = 0;
    tail = 0;
    list_len = num_lanes;
}

RouterLinkedList::~RouterLinkedList(){
    for(auto n = list.begin(); n != list.end(); ++n) {
        delete *n;
    }
    for(auto n = listtmp.begin(); n != listtmp.end(); ++n) {
        delete *n;
    }
}

void RouterLinkedList::add_instruction(uint32_t next_idx){
    //uint32_t next_idx = find_free_slot();
    //next_idx = find_free_slot();
    mask_set_this_cycle = 1<<next_idx;
    if(queue_empty()){
        list[next_idx]->valid = true;
        tail = next_idx;
        head = next_idx;
        cout<<"INSERT:"<<next_idx<<" head:"<<head<<" tail:"<<tail<<endl;
    }
    else if (tail == next_idx){ // This need to addressed in RTL

    }
    else{
        list[next_idx]->valid = true;
        list[next_idx]->has_parent = true;
        list[next_idx]->parent = tail;

        list[tail]->has_child = true;
        list[tail]->child = next_idx;
        tail = next_idx;
        cout<<"INSERT:"<<next_idx<<" head:"<<head<<" tail:"<<tail<<endl;
    }
}

void RouterLinkedList::reset_instructions(uint32_t reset_mask){
    cout<<"reset mask:"<<reset_mask<<" "<<mask_set_this_cycle<<endl;
    //    print_current_list();
    node listtmp[list_len];
    for(int i=0; i<list_len; i++){
        listtmp[i] = (*list[i]); 
    } 
    for(int i =0;  i<list_len; i++){
        if(((reset_mask>>i) & 1) && listtmp[i].valid && !((mask_set_this_cycle>>i) & 1)) {
            uint32_t next_val_child = i;
            uint32_t next_val_parent = i;
             
            cout<<"finding child"<<endl;
            if(listtmp[i].has_child)
                 next_val_child = find_next_valid_child(i,reset_mask);
            cout<<"child found"<<endl;
            if(listtmp[i].has_parent)    
                 next_val_parent = find_next_valid_parent(i,reset_mask);
            cout<<i<<" val child:"<<next_val_child<<" val parent:"<<next_val_parent<<endl;

            if(next_val_child != i && next_val_parent != i){ // reset node has both parent and child nodes
                    listtmp[next_val_child].parent = next_val_parent;
                    listtmp[next_val_child].has_parent = true;
                      
                    listtmp[next_val_parent].child = next_val_child;
                    listtmp[next_val_parent].has_child = true;
            }
            else if(next_val_child != i && next_val_parent == i){ // reset node is the head
                    listtmp[next_val_child].parent = 0;
                    listtmp[next_val_child].has_parent = false;
                    head = next_val_child;
            }
            else if(next_val_child == i && next_val_parent != i){ // reset node is the tail
                    listtmp[next_val_parent].child = 0;
                    listtmp[next_val_parent].has_child = false;
                    tail = next_val_parent;
            }
            //else{ //all nodes are getting reset
            //        head = 0;
            //        tail = 0;
            //}
          

                
            listtmp[i].valid = false;
            listtmp[i].has_parent = false;
            listtmp[i].parent = 0;
            listtmp[i].has_child = false;
            listtmp[i].child = 0;
      //  print_current_list();
        cout<<endl;             
        }
    }
    mask_set_this_cycle = 0;
    for(int i=0; i<list_len; i++){
        (*list[i]) = listtmp[i]; 
    } 
    //for(auto n = listtmp.begin(); n != listtmp.end(); ++n) {
    //    delete *n;
    //}
}

uint32_t RouterLinkedList::find_free_slot(){
    uint32_t ret;
    for(int i =0;  i<list_len; i++){ 
       if(!list[i]->valid){
           ret = i;
           break;
       }
    }
    return ret;
}

uint32_t RouterLinkedList::find_next_valid_child(uint32_t idx, uint32_t reset_mask){
    uint32_t idx_iter = idx; 
    while(list[idx_iter]->valid && ((reset_mask >> idx_iter) & 1) && !((mask_set_this_cycle>>idx_iter) & 1)){
        if(list[idx_iter]->has_child){
            idx_iter = list[idx_iter]->child;
        }
        else
            break;
    }
    if(((reset_mask >> idx_iter) & 1) && !((mask_set_this_cycle>>idx_iter) & 1)) 
        return idx;
    else
        return idx_iter;
}


uint32_t RouterLinkedList::find_next_valid_parent(uint32_t idx, uint32_t reset_mask){
    uint32_t idx_iter = idx; 
    while(list[idx_iter]->valid && ((reset_mask >> idx_iter) & 1) && !((mask_set_this_cycle>>idx_iter) & 1)){
        if(list[idx_iter]->has_parent){
            cout<<idx_iter<<" "<<list[list[idx_iter]->parent]->valid<<endl;
            idx_iter = list[idx_iter]->parent;
        }
        else
            break;
    }
    cout<<idx<<" "<<idx_iter<<" "<<!((mask_set_this_cycle>>idx_iter) & 1)<<endl;
    if(((reset_mask >> idx_iter) & 1) && !((mask_set_this_cycle>>idx_iter) & 1))
        return idx;
    else
        return idx_iter;
}

void RouterLinkedList::print_current_list(){
    cout<<"head:"<<head<<" tail:"<<tail<<endl;
    uint32_t iter = head;
    for(int i =0;  i<list_len; i++){
        if(list[iter]->valid) 
            cout<<list[iter]->idx<<" has parent:"<<list[iter]->has_parent<<" parent:"<<list[iter]->parent<<" has child:"<<list[iter]->has_child<<" child:"<<list[iter]->child<<" "<<endl;

        if(!list[iter]->has_child)
            break;
        iter = list[iter]->child;
    }
}

bool RouterLinkedList::queue_empty(){
    bool ret= true;
    for(int i =0;  i<list_len; i++){
        if(list[i]->valid)
            ret = false;
    }
    return ret;
}


//int main(int argc, char * argv[]) {
//    RouterLinkedList l(5);
//    l.add_instruction();
//    l.add_instruction();
//    l.add_instruction();
//    l.reset_instructions(0b010);
//
//    l.print_current_list();
//    l.add_instruction();
//    l.add_instruction();
//    
//    l.print_current_list();
//    l.reset_instructions(0b1001);
//
//    l.add_instruction();
//    l.print_current_list();
//}
