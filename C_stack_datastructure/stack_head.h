// to display the node************************************************
void disp ();

// to add the new node in front********************************************
void push (int);

// to remove the new node from the front********************************
void pop ();

// to print the top value*********************************************
void top();

// to check if the list is empty**************************************
void isempty();

//structure creation****************************************
struct node
{

int data;

struct node* next;

};

//head global******************************************************
struct node* head;

//first node global************************************************
struct node* first;

//size global****************************************************
 int size=0;

