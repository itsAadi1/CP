#include<stdio.h>
#include<string.h>
#define MAX 50
int top=-1;
char stack[MAX];

int isempty(){
 if(top==-1)
 return 1;
 return 0;
}

int isfull(){
    if(top==(MAX-1))
    return 1;
    return 0;
}

int push(char d){
    if(isfull())
    return 0;
    top++;
    stack[top]=d;
}

char pop(){
    if(isempty())
    return 0;
     return (stack[top--]);
}

int paramatch(char a,char b){
    if(a=='(' && b==')')
    return 1;
    if(a=='{' && b=='}')
   return 1;
   if(a=='[' && b=='}')
   return 1;
   return 0;
}
int paracheck(char d[]){
    char z;
    int i;
    for(i=0;i<strlen(d);i++){
            if(d[i]=='(' || d[i]=='{' || d[i]=='[')
        push(d[i]);
    if(d[i]==')' || d[i]=='}' || d[i]==']'){
        if(isempty()){
            return 0;
        }
       else{
      z=pop();
    
    if(!paramatch(z,d[i]))
      return 0;
       }
    }
    }
    if(isempty())
    return 1;
    return 0;
    }


int main(){
    char s[MAX];
        int val;
        printf("Enter an algebraic expression : ");
        gets(s);
    val=paracheck(s);
    if(val==1){
        printf("Balanced Paranthesis");
    }
    else
    printf("Not balanced");
    return 0;
}