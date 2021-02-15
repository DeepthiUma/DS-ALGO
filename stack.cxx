/******************************************************************************
A simple program to reverse the string using STACK
Functions supported: PUSP, POP, ISEmpty, PEEK
*******************************************************************************/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Stack
{
private:
    int top;
    int capacity;
    char *array;
public:
Stack* createStack(int N)
{
    Stack *st = new Stack();
    st->capacity = N;
    st->array = new char[(st->capacity * sizeof(char))]; 
    st->top = -1;
    return st;
}

/* Check whether the stack is full or not */
bool isFull(Stack* inSt)
{
    if(inSt->capacity == inSt->top) return true;
    else return false;
}
/* Push the string into the stack */
void push(Stack *inSt, char inChar)
{
    if(isFull(inSt)) return;
    inSt->array[++inSt->top] = inChar;
    //inSt->top++;
}
/* Check whether the stack is empty or not */
bool isEmpty(Stack* inSt)
{
    if(inSt->top == -1) return true;
    return false;
}
/* Pop the characters from the Stack */
char pop(Stack *inSt)
{
    if(isEmpty(inSt)) return '\0';
    else return inSt->array[inSt->top--];
}
/* Peek into the stack and return the char which is visible */
char peek(Stack *inSt)
{
    if(isEmpty(inSt)) return '\0';
    else return inSt->array[inSt->top];
}

/* Function to reverse the string */
char* reverse(char* inputStr)
{
     if(inputStr == NULL) return '\0';
     
     int len = strlen(inputStr);
     cout << "String length: " << len <<endl;
     Stack *rSt = createStack(len);
     int i =0;
     while(inputStr[i] != '\0')
     {
        push(rSt, inputStr[i]);
        cout << inputStr[i];
        i++;
    }
    i = 0;
    char *ch = new char[(len * sizeof(char))];
    while(len--){
        ch[i] = pop(rSt);
        i++;
    }

    return ch;
}
};

int main()
{
    Stack st;
    const char *arr = "Stack"; // One way of using the char array with const
    int len = strlen(arr); // strlen return without null character
    Stack *rSt = st.createStack(len);
    int i =0;
    while(*(arr+i)!='\0')
    {
      st.push(rSt, arr[i]);
      cout << arr[i];
      i++;
    }
    cout << endl;
    char ch =st.pop(rSt);
    cout << "POP: " << ch << endl;
    cout << "PEEK: " << st.pop(rSt) << endl;
    char revString[] = "Stack Reverse"; // Another way of using the char array without const
    // const char *revString = "Stack Reverse"; This string can be passed to the function reverse in the class Stack, 
    // when the reverse paramater is const char* reverse(const char* inputStr)
    cout << "Reverse: " << st.reverse(revString);
}
