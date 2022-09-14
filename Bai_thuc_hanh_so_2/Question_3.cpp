Node* addLastNode(Node *head, int value)
{
    Node* last = head;
    Node* appendedNode = new Node();
    appendedNode->value = value;
    appendedNode->nextNode = NULL;

    if (head == NULL)
    {
        head = appendedNode;
        return head;
    }
    else
    {
        while (last->nextNode != NULL)
        {
            last = last->nextNode;
        }
        last->nextNode = appendedNode;
        return head;
    }
}