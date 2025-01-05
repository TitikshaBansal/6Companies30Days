class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        Node* current = head;
        while (current) {
            for (int i = 1; i < m && current != NULL; i++) {
                current = current->next;
            }
    
            if (current == NULL) break;
            Node* temp = current->next;
            for (int i = 0; i < n && temp != NULL; i++) {
                Node* nodeToDelete = temp;
                temp = temp->next;
                delete nodeToDelete;
            }
            current->next = temp;
            current = temp;
        }
        return head;
    }
};
