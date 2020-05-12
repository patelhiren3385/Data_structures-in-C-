#include <iostream>

struct NODE
{
    int data ; // Store the data
    NODE* link ; // To store the address of Next node
};
NODE* head ; // Global Variable to save address of head node
void Insert(int x) // We need to create the Node
{
    NODE* temp = (NODE*)malloc(sizeof(struct NODE)); // New returns the pointer
    (*temp).data = x ;
    (*temp).link = NULL ;
    if (head != NULL) (*temp).link = head ; //Copy address data of Already existed NODE
    head = temp ; // Replace OLd value stored in HEAD to NEW value we created

}
void print()
{
    NODE* temp = head ;
    std::cout << "List is: " ;
    while(temp != NULL)
    {
        std::cout << (*temp).data ;
        temp = (*temp).link ;
    }
    std::cout << std::endl ;
}
// Procedure ::
//0. Create Node :: Linked list is collection of Node.
//1. Create Pointer which will store address of HEAD node
//2.

int main()
{
    head = NULL ; // Empty List ---- Empty list  --> Created Head node which points to NUll
    std::cout << "How Many numbers? " << std::endl ;
    int num,x ;
    std::cin >> num ;
    for (int i=0;i<num;i++)
    {
        std::cout << "Enter the number " << i << std::endl  ;
        std::cin >> x ;
        Insert(x) ;  // Insert the number to Linked List by calling the Method -- Insert
        print() ; // We will print Value of Each node by doing Print

    }


    return 0;
}
