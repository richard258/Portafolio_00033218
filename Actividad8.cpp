#include <iostream>
using namespace std;

struct Tpila{
   float elements[100];
   int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
   s->top = -1;
}

bool empty(Pila *s){
   return s->top < 0;
}

void push(Pila *s, float e){
   if(s->top < 99){
      (s->top)++;
      s->elements[s->top] = e;
   }
}

void pop(Pila *s, float *e){
   if(s->top >= 0){
      *e = s->elements[s->top];
      (s->top)--;
   }
}

float pilavacia(Pila *s){
   if(empty(s)){
      return -1;
   }
   else{
      float a = 0, b = 0;
      a=(s->top);
      for(int i=0;i<a+1;i++){
         if(empty(s)){
            return -1;
         }
         else{
            pop(s, &b);
         }
      }
      return b;
   }
}

float pilaintacta(Pila *s){
   if(empty(s)){
      return -1;
   }
   else{
      float b = 0;
      int a=0;
      a=(s->top);
      float arreglo[a+1];
      for(int i=0;i<a+1;i++){
         if(empty(s)){
            return -1;
         }
         else{
            pop(s, &b);
            arreglo[(a+1)-i]=b;
         }
      }
      for(int i=1;i<a+1;i++){
         push(s, arreglo[i]);
      }
      return b;
   }
}

int main()
{
   Pila unaPila;
   initialize(&unaPila);

   push(&unaPila, 1);
   push(&unaPila, 2);
   push(&unaPila, 3);

   float primero = pilaintacta(&unaPila);
   cout << "Ultimo elemento de la pila (dejandola intacta): " << primero << endl;

   float segundo = pilavacia(&unaPila);
   cout << "Ultimo elemento de la pila (dejandola vacia): " << segundo << endl;
}