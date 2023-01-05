// problem - to add data at the first position in a given liked list
// function add first will have current head and val to be added as inputs

Node* addFirst(int val, Node*head){
  Node *temp = new Node(val);
  temp->next = head;
  head = temp;
  
  return head;
}