// problem - to add data at the specified position/index in a given liked list
// function add first will have current head and val to be added as inputs

Node* AddAtSpecifiedIndex(int val, Node*head,int index){
  Node *temp = new Node(val);
  Node *nhead = head;

  if(index==0){
    temp->next=head;
    head=temp;
    return head;
  }
  int count=0;
  while(count+1 != index){
    if(nhead==NULL){
        cout<<"invalid";
        return head;
    }
    count++;
    nhead=nhead->next;
  }
  temp->next=nhead->next;
  nhead->next=temp;
  return head;
  
}