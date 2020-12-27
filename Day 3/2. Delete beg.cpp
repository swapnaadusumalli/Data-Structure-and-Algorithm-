Node *Delete(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return head;
}
