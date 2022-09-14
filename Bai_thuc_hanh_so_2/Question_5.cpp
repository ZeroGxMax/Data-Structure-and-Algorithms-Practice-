int getSum(Node* head)
{
    Node* iter = head;
    int sum{0};
    while (iter != NULL)
    {
        sum += iter->value;
        iter = iter->nextNode;
    }
    return sum;
}