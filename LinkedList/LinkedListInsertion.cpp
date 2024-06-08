#include<bits/stdc++.h>
using namespace std;

class  Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"the memory is delted"<<endl;
    }
};

void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
}

void insertAtTail(Node* tail, int d){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
        
}

void insertAtPosition(Node* tail, Node* head,int position, int d){
        //if starting positon is 1st
        if(position==1){
            insertAtHead(head,d);
            return;
        }
        
        Node* temp = head;
        int count =1;
        while(count<position-1){
            temp = temp->next;
            count++;
        }

        if(temp->next == NULL){
            insertAtTail(tail,d);
        }
        //creating a node 

        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
}

void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

//print using recursion

void print1(Node* head){
    if(head == NULL){
        return;
}
cout<<head->data<<" ";
print1(head->next);

}
void deleteNode(int position, Node* &head){
    if(position == 1){
            Node*temp = head;
            head = head->next;
            //memory free
            temp->next = NULL;
            delete temp;
    }
    else{
        //deleting any midddle or last node

        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr ->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    //created a new node
        Node* node1 = new Node(10);
        cout<<node1->data<<endl;
        cout<<node1->next<<endl;

    //head pointed to
    Node*head = node1;
    Node*tail = node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);

    // insertAtPosition(head,2,20);
    // print(head);

    insertAtTail(tail,20);
    print1(tail);

    deleteNode(2,head);
    print(head);




}