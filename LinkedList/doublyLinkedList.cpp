#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
cout<<endl;
}

// int getlength(Node* head){
//     int len =0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    temp = tail;
}

void insertAtPosition( Node* tail, Node* head, int position, int d){
    if(position==1)
    {
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp ->next = NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp-> next ->prev = nodeToInsert;
    temp->next = nodeToInsert;
     nodeToInsert->prev = temp;


}


void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node*curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

       curr->prev = NULL;
       prev->next = curr->next;
       curr->next = NULL;

       delete curr;
    }
}
int main()
{

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 7);
    print(head);

    insertAtTail(tail,8);
    print(head);

    insertAtPosition(tail, head, 1, 100);
    print(head);
    
    // cout<<"the length of the linked list"<<getlength(head)<<endl;
}