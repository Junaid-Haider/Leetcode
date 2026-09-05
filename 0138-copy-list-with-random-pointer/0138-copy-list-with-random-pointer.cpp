class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node* temp=head;
        while(temp){
            Node* n=new Node(temp->val);
            n->next=temp->next;
            temp->next=n;
            temp=temp->next->next;
        }
        temp=head;
        while(temp){
            if(temp->random)
                temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        temp=head;
        Node* head2=head->next;
        while(temp){
            Node* n=temp->next;
            temp->next=n->next;
            if(n->next)
                n->next=n->next->next;
            temp=temp->next;
        }
        return head2;
    }
};