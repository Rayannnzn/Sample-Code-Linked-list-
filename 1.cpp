#include <iostream>
using namespace std;


class Node{

    public : 

    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }


};


class Linkedlist{

public : 

Node *head;

    Linkedlist(){
        head = nullptr;
    }


void Insert(int val){
    if(head == nullptr){
        head = new Node(val);
        return;
    }
    else{
        Node * temp = head;
        while(temp->next == nullptr){
            temp = temp->next;
        }
        temp->next = new Node(val);
    }

}


void display(){
    if(head == nullptr){
        cout<<"The list is Empty "<<endl;
        return;
    }
    else{
        Node *temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
}



};


int main(){

    Linkedlist l1;

    l1.Insert(10);
    l1.Insert(50);
    l1.Insert(70);
    l1.Insert(100);


    return 0;
}