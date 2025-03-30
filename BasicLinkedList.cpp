#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(){
    }

    Node(int value){
        this->value = value;
    }
};


//Recursion PrintLinkList Value
void printLink(Node node){
    
    cout << node.value << endl;
    
    if (node.next == NULL){
        return;
    }

    printLink(*node.next);
    
}


int main(){
    
    //Dynamic Allocation nodes
    Node* node1 = new Node();
    Node* node2 = new Node();

    //settign values in node
    node1->value = 1;
    node2->value = 2;

    //connecting nodes
    node1->next = node2;
    node2->next = NULL;

    printLink(*node1);
    cout<<endl;

    Node node3(3);
    Node node4(4);

    //The address needs to passed as node4 was created non dynamically
    node3.next = &node4;
    node4.next = NULL;

    printLink(node3);
    
    Node nodeArray [5];

    return 0; 
}