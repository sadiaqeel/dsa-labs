Task -1
#include <iostream>
using namespace std;
class PlateStack {
private:
    int plates[3];   
    int top;        
public:
    PlateStack() {
        top = -1;  
    }
void push(int plate) {
        if (top >= 2) {
            cout << "Stack is full. Cannot add more plates.\n";
        } else {
            plates[++top] = plate; 
            cout << "Added plate " << plate << " to the stack.\n";
        }
    }
void pop() {
        if (top < 0) {
            cout << "Stack is empty. Cannot remove any plates.\n";
        } else {
            cout << "Removed plate " << plates[top--] << " from the stack.\n";
        }
    }
void peek() {
        if (top < 0) {
            cout << "Stack is empty. No plates on top.\n";

1

        } else {
            cout << "Top plate is: " << plates[top] << "\n";
        }
    }
bool isEmpty() {
        return top == -1;
    }
bool isFull() {
        return top == 2;
    }
};

int main() {
    PlateStack stack;

    stack.push(1);   
    stack.push(2);   
    stack.push(3);   
    stack.push(4);   

    stack.peek(); 

    stack.pop();     
    stack.peek();     

    stack.pop();  
    stack.pop();     
    stack.pop();    

    return 0;
}