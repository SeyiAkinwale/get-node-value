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


//recursive
std::string getNodeValue(Node* head, int index) 
{
  if(head==nullptr) return "";
  else if (index==0) return head->val;
  else return getNodeValue(head->next, index-1);
}

int main() 
{
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