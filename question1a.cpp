# abbas142lab4


#include<iostream>
using namespace std;

class node{ //node containing a data and a pointer of node type to link the next element
	public:
	float data; 
	node* next;
};
class stackll{ //class of stack containing a bottom and top to represent the linklist
	node* bottom, *top; 
	public:
	stackll(){ //constructor of stack
		bottom = NULL;
		top = NULL;
	}
	void push(float data);
	void pop();
	void show();
};
int main(){
	stackll stack;
	cout<<"This is to implement stack using linklist"<<endl;
	cout<<"How many data you have?"<<endl;
	int num;
	cin>>num;
	int data;
	for(int i=0; i<num; i++){ //loop to recursively take the value of data
		cin>>data; 	
		stack.push(data); //pushing the data to stack by calling the push function 
	}
	stack.show(); //calling the show function 
	cout<<"number of data you want to delete"<<endl;	
	cin>>num;
	for(int i=0; i<num; i++){ //popping the element recursively
		stack.pop(); //calling the pop function
	}
	stack.show(); //showing the stack
	return 0; 
}
 
void stackll::push(float data){
	node* temp =new node; //creating a node object
	temp ->data = data; //putting the data;
	temp->next=NULL;
	if (bottom ==NULL){ //when the stack is empty
		bottom =temp ;
		top =temp;
	}	
	else { //when the stack is non-empty
		top->next =temp;	 //
		top =temp;
	}
}
void stackll::pop(){
	if (bottom==NULL){
		cout<<"This stack is empty you can't pop any more"<<endl;
	}
	else if(bottom==top){
		node* temp =bottom;
		delete temp;
		bottom =NULL;
		top= NULL;
	}
	else {
		node* temp=bottom;
		while(temp->next !=top &&  temp->next!=NULL){
			temp =temp->next;
		}
		top =temp;
		temp =temp->next;
		delete temp;
	}
}
void stackll::show(){
	node* temp =bottom;
	if(bottom==NULL){
	cout<<"there is nothing to show"<<endl;
	}
	else {
		while(temp!=top){
		cout<<temp->data<<"->";
		temp=temp->next;	
		}
		cout<<temp->data<<endl;
	}
}
