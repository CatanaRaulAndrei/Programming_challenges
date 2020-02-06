/*
Task
A Node class is provided for you in the editor. A Node object has an integer data field, , and a Node instance pointer, , pointing to another node (i.e.: the next node in a list).

A removeDuplicates function is declared in your editor, which takes a pointer to the  node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

Note: The  pointer may be null, indicating that the list is empty. Be sure to reset your  pointer when performing deletions to avoid breaking the list.

Input Format

You do not need to read any input from stdin. The following input is handled by the locked stub code and passed to the removeDuplicates function:
The first line contains an integer, , the number of nodes to be inserted.
The  subsequent lines each contain an integer describing the  value of a node being inserted at the list's tail.

Constraints

The data elements of the linked list argument will always be in non-decreasing order.
Output Format

Your removeDuplicates function should return the head of the updated linked list. The locked stub code in your editor will print the returned list to stdout.

Sample Input

6
1
2
2
3
3
4
Sample Output

1 2 3 4
Explanation

, and our non-decreasing list is . The values  and  both occur twice in the list, so we remove the two duplicate nodes. We then return our updated (ascending) list, which is .
*/

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
             Node* duplicate, *search1, * search2;
            search1=head;
             while (search1 != NULL && search1->next != NULL){
                 search2=search1;
                  while (search2->next != NULL){
                      if (search1->data == search2->next->data){ 
                            duplicate = search2->next; 
                            search2->next = search2->next->next;
                            duplicate->next=NULL;
                            delete(duplicate); 
                      }
                     else{
                         search2 = search2->next;
                     }
                  }
                   search1 = search1->next; 
             } 
            return head;
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}


