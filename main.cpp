#include <iostream>

#include <string>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};


//iterative
std::string getNodeValue(Node* head, int index) 
{
  Node * current = head;
  int location=0;
  while(current!=nullptr)
  {
    if(location==index) return current->val;
    location++; current=current->next;
  }
  return "";
}

int main() {
  Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

std::cout<<getNodeValue(&a, 2); // "c"
}