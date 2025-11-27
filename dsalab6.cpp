include <iostream>
using namespace std;
class node{
    int data;
    node *next;
    node *prev;
    public:
    node(val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
}
class LL{
    node *head;
    public:
    LL(){
        head==nullptr;
        
    }
    void insertion(int val){
        node* NN = new node(val);
        if(head==nullptr){
            head=NN;
        }else{
            node* temp = head;
            while(temp->next!=head{
                temp=temp->next;
            }
            temp->next=NN;
            NN->prev=temp;
        }


    }
    void deletion(int val){
        node* temp=head;
        while(temp->data!=val || temp->next!=nullptr){
            temp=temp->next;
        }
        if(temp->next==nullptr){
            cout<<'not there';
        }else{
            node* save = temp->prev;
            temp->prev->next=temp->next;
            temp->next->prev=save;
            delete temp;

        }
    }
    void search(int val){
         node* temp=head;
         int c=0;
        while(temp->data!=val ){
            temp=temp->next;
            c++;
        }
        cout<<'value found at'<<c;
    }
}

void displaycirc(node* head){
    node* temp=head;
    while(temp!=head){
        cout<<temp->data;
    }
}

//Question three is same as searching for index of element;

void pallindrom(node* head){
    node* first = head;
    node* last = head;
    while(last->next != nullptr){
        last=last->next;
    }
    while(last!=first || last->next!=first){
        if(last->data!=first->data){
            return false;
        }
        first=first->next;
        last=last->prev;
    }
    return true;
}


void checkcircle(node* head){
    node* slow=head;
    node* fast = head;
    if(head->next==nullptr || head==nullptr){
        return false;
    }
    while(fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

class node{
    public:
    int val;
    node* l;
    node* r;
    node* u;
    node* d;
    node(int val){
        this->val = val;
        r==nullptr;
        l==nullptr;
        u==nullptr;
        d==nullptr;
    }

}

  