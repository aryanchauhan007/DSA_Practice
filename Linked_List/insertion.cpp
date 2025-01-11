#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    public:
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
    public:
    node (int data1){
        data = data1;
        next = nullptr;
    }
};
// converting an arry to linked list
node* ArrtoLL(vector<int> &arr){
    node* head =new node(arr[0]);
    node* mover = head;
    for(int i =1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next= temp;
        mover = temp;
    }
    return head;
}
void print(node* head){
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// inserting node at Kth postion
node* insertPosition(node* head, int el, int k){
    if(head==NULL){
        if(k==1){
            return new node(el);
        }
        else {
            return head;
        }    
    }
    if(k==1){
        return new node(el,head);
    }
    int cnt=0;
    node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt==(k-1)){
            node* x = new node(el, temp->next);
            temp->next= x;
            break;
        }
        temp=temp->next;

    }
    return head;
}
// insert element before the given element
node* insertElementbefore(node* head, int el, int val){
    if(head==NULL){
            return NULL;
    }
    if(head->data==val){
        return new node(el,head);
    }
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data ==val){
            node* x = new node(el, temp->next);
            temp->next= x;
            break;
        }
        temp=temp->next;

    }
    return head;
}
int main(){

    vector<int> arr ={ 12, 5, 7, 9};
    node* head = ArrtoLL(arr);
    head= insertElementbefore(head ,60, 5);
    print(head);
}