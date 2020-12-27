Node *Delete(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *ptr, *temp = head;
    while (temp->next)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    delete temp;
    return head;
}
