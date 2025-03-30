#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
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

    Node node3, node4;
    Node nodeArray [5];

    return 0; 
}