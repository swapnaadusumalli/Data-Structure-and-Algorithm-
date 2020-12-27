Node *Insert(Node *head, int pos, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *ptr = head;
    while (--pos)
        ptr = ptr->next;
    newNode->next = ptr->next;
    ptr->next = newNode;
    return head;
}
