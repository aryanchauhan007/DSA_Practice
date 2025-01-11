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

// delete the last node or tail
node* deleteTail(node* head){
    if(head==NULL || head->next==NULL ) return NULL;
    node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
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
// delete the Kth node in a linked list
node* deletek(node* head, int k){
    if(head==NULL) return NULL;
    if(k==1){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt= 0;
    node* temp =head;
    node* prev= NULL;

    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;  
}
// remove a random element from linked list
node* removeEl(node* head, int el){
    if(head==NULL) return NULL;
    if(head->data==el){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    node* temp =head;
    node* prev= NULL;

    while(temp!=NULL){
        if(temp->data==el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;  
}

int main(){

    vector<int> arr ={ 12, 5, 7, 9};
    node* head = ArrtoLL(arr);
    head= removeEl(head , 7);
    print(head);
}