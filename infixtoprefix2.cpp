using namespace std; 
 #include <iostream> 
 #include <string.h> 
 #include <ctype.h> 
  
 class test 
 {  
     public: 
     int SIZE,top; 
     char s[50]; 
     test() 
     { 
         top=1; 
         SIZE = 50; 
     } 
     void push(char elem) 
     { 
         s[++top]=elem; 
          
     } 
     char pop() 
     { 
         return(s[top--]); 
     } 
     int pr(char elem) 
     { 
         switch(elem) 
         { 
             case'#':return 0; 
             case')': return 1; 
             case '+': 
             case'-':return 2; 
             case '*': 
             case '/': return 3; 
          
         } 
         return 0; 
     }  
 }; 
 int main() 
 { 
 test obj; 
 char infx[50],prfx[50],ch,elem; 
 int i=0,k=0; 
 cout<<"\n\nEnter valid Infix Expression :"; 
 cin>>infx; 
 obj.push('#'); 
 strrev(infx); 
 while(ch=infx[i++] != '\0') 
 { 
     if(ch == ')') 
         obj.push(ch); 
     else if(isalnum(ch)) 
         prfx[k++]=ch; 
     else if(ch=='(') 
     { 
     while(obj.s[obj.top]!=')') 
         prfx[k++]=obj.pop(); 
         elem=obj.pop(); 
     } 
     else 
     { 
         while(obj.pr(obj.s[obj.top])>=obj.pr(ch)) 
         prfx[k++]=obj.pop();obj.push(ch); 
     } 
 } 
 while (obj.s[obj.top]!='#') 
 { 
     prfx[k++]=obj.pop(); 
 } 
 prfx[k]='\0'; 
 strrev(prfx); 
 strrev(infx); 
 cout<<"\n\nGiven Infix Expn:"<<infx<<"\nPrefix expn:"<<prfx; 
 }
